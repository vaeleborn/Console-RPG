#ifndef PLAYER_STATS_H
#define PLAYER_STATS_H
#include "Globals.h"
#include <string>
#include <sstream>

enum ENERGY_SOURCE {FATIGUE, MANA};

//Struct to hold the stats that affect an entity by changing things such as their max health, damage, mana, etc
struct PowerStats
{
	uint stamina;							//Stat that will primarily affect max health, can be used for skill checks
	uint strength;							//Stat that will primarily affect physical melee damage, can be used for skill checks
	uint dexterity;							//Stat that will primarily affect physical ranged damage, can be used for skill checks
	uint intelligence;						//Stat that will primarily affect max mana, can be used for skill checks
	uint wisdom;							//Stat that will primarily affect magical damage, can be used for skill checks
	uint faith;								//Stat that will primarily affect miracle strength, can be used for skill checks

	PowerStats() : stamina(0), strength(0), dexterity(0), intelligence(0), wisdom(0), faith(0) {}			//Default Init

	std::string GetString();		//Outputs the stats as a string
	//TODO: IMPLEMENT FUNCTIONS TO CALCULATE THE "BRACKET" FOR EACH STAT TO BE USED FOR PERCENTAGE INCREASES IN VARIOUS THINGS
	
};

//Struct to hold stats for the general behavior type of the entity based on their karma and wealth
struct BehaviorStats
{
	uint karma;
	uint wealth;

	BehaviorStats() : karma(5), wealth(0) {}
	std::string GetString();		//Gets a str to return

	//TODO: IMPLEMENT FUNCTIONS TO CALCULATE THE "BRACKET" THAT THE ENTITY IS IN FOR EACH OF THE ABOVE STATS AND A COLLECTIVE "SOCIAL STATUS" 
};

//Struct to hold the level of an entity as well as their experience points
struct Level
{
	int currentLevel;
	int currentExperience;
	int experienceNeeded;

	Level() : currentLevel(1), currentExperience(0), experienceNeeded(100) {}
	std::string GetString();		//Gets a str to return
};

//Struct to hold the active stats of an entity, that is the stats that are used for actions
struct ActiveStats
{
	int attackPower;					//Stat used to give a bonus to damage from non magical attacks
	int magicPower;						//Stat used to give a boost to spells
	int prayerPower;					//Stat used to give a boost to miracles
	int castingPower;					//Stat used to increase casting success chance
	
	int physicalStamina;				//Stat used to reduce the cost of fatigue for physical actions
	int magicalAttunement;				//Stat used to reduce the cost of magical actions
	int devotion;						//Stat used to reduce the cost of miracles
			
	uint dodgeChance;					//Stat to determine the chance to dodge an attack
	uint physicalHitChance;				//Stat to determine the chance a physical attack will land
	uint magicalHitChance;				//Stat to determine the chance a magical hit will land
	uint miracleHitChance;				//Stat to determine the chance a miracle will hit the target

	ActiveStats() : attackPower(0), magicPower(0), prayerPower(0), castingPower(0), physicalStamina(0), magicalAttunement(0), devotion(0),
		dodgeChance(0), physicalHitChance(80), magicalHitChance(80), miracleHitChance(80) {}
	std::string GetString();
};

//Primary player stat struct to contain all major stats the player will have
struct PlayerStats
{
	ENERGY_SOURCE energyType;
	Level playerLevel;
	ActiveStats activeStats;
	PowerStats powerStats;
	BehaviorStats behaviorStats;

	PlayerStats() : energyType(FATIGUE) {}
};
#endif
