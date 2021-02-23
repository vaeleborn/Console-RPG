#ifndef PLAYER_CHARACTER_H
#define PLAYER_CHARACTER_H
#include "BaseCharacterEntity.h"
#include "PlayerStats.h"

/*
	Class for the player character
*/
class PlayerCharacter : BaseCharacterEntity
{
private:
	PlayerStats mStats;

	//TODO: IMPLEMENT A SKILLS STRUCT AND ADD A MEMBER VARIABLE
	//TODO: IMPLEMENT A INVENTORY CLASS AND ADD A MEMBER VARIABLE


	
public:
	void LevelUp();

	void UseItem(int ID);

	std::string GetString();

	PlayerCharacter();

	~PlayerCharacter();

};
#endif
