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

	rtn << RepeatChar('-', 40);
	rtn << "\n\t\tMAIN STATS\n";
	rtn << RepeatChar('-', 40) << "\n\n";

	rtn << this->mStats.powerStats.GetString();

	rtn << RepeatChar('-', 40);
	rtn << "\n\t     SOCEITAL STATS\n";
	rtn << RepeatChar('-', 40) << "\n\n";

	rtn << this->mStats.behaviorStats.GetString();
	
	rtn << RepeatChar('-', 40);
	rtn << "\n\t\tLEVEL INFO\n";
	rtn << RepeatChar('-', 40) << "\n\n";

	rtn << this->mStats.playerLevel.GetString();

	rtn << RepeatChar('-', 40);
	rtn << "\n\t\tACTIVE STATS\n";
	rtn << RepeatChar('-', 40) << "\n\n";

	rtn <<	this->mStats.activeStats.GetString();

	if (this->mStats.energyType == FATIGUE)
	{
		rtn << "Energy Source:\t\tFATIGUE\n\n";
	}
	else
	{
		rtn << "Energy Source:\t\tMANA\n\n";
	}
	return std::string(rtn.str());
}

PlayerCharacter::PlayerCharacter()
{
}

PlayerCharacter::~PlayerCharacter()
{
}
