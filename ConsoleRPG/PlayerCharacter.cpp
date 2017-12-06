#include "PlayerCharacter.h"

void PlayerCharacter::LevelUp()
{
	if (mStats.playerLevel.currentExperience >= mStats.playerLevel.experienceNeeded)
	{
		if (mStats.playerLevel.experienceNeeded < mStats.playerLevel.currentExperience)
		{
			mStats.playerLevel.currentExperience -= mStats.playerLevel.experienceNeeded;
		}
		mStats.playerLevel.currentLevel++;
	}
}

void PlayerCharacter::UseItem(int ID)
{
		//TODO: IMPLEMENT FUNCTION BASED ON CHARACTER INVENTORY
}

PlayerCharacter::PlayerCharacter()
{
}

PlayerCharacter::~PlayerCharacter()
{
}
