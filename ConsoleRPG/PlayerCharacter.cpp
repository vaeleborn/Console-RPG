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

std::string PlayerCharacter::GetString()
{
	std::stringstream rtn;
	rtn << this->mStats.powerStats.GetString() << this->mStats.behaviorStats.GetString() << this->mStats.playerLevel.GetString() <<
		this->mStats.activeStats.GetString();
	return std::string(rtn.str());
}

PlayerCharacter::PlayerCharacter()
{
}

PlayerCharacter::~PlayerCharacter()
{
}
