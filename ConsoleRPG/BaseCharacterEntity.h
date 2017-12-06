#ifndef BASE_CHARACTER_ENTITY_H
#define BASE_CHARACTER_ENTITY_H


#include <string>

#include "Globals.h"
#include "Location.h"

enum GENDER {FEMALE, MALE};
enum AGE { CHILD, TEEN, ADULT, ELDER };

/****************************************************
	Base class for all character entities such as 
	the PC, friendly NPCs, enemies, and bosses
****************************************************/
class BaseCharacterEntity
{
private:
	int mID;						//NEEDS TO BE MADE UNIQUE
	std::string mName;				//Name of the entity that the player will be able to see
	uint mHealth;					//The health of the entity (cannot go below zero)
	bool mIsActive;					//A boolean to determine if the entity is active(spawned in the world)
	Location mLocation;				//The location of the entity in the world
	GENDER mGender;					//The gender of the entity (to be used for potential sprites and or unique dialogue)
	AGE mAge;						//The age(range) of the entity (to be used for potential sprites and or unique dialogue)

protected:
	bool mIsAlive;									//A boolean to determine if the entity is alive or dead
	virtual std::string Talk(std::string text);		//A virtual function to get a string of what the entity is saying
	virtual void Spawn(Location loc);				//A virtual function to spawn the entity into the world
	virtual void MoveTo(Location loc);				//A virtual function to move the entity(base will teleport, possible others include walk, run, fly, etc)
	virtual void LoadData();						//A virtual function that loads the entities data from a file(name format ID.bin)
	virtual void SaveData();						//A virtual function that will save the data of the entity


public:
	BaseCharacterEntity();
	~BaseCharacterEntity();



};

#endif

