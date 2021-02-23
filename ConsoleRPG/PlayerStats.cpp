#include "PlayerStats.h"

std::string PowerStats::GetString()
{
	std::stringstream rtn;

	rtn << "Stamina:\t\t" << this->stamina << "\nStrength:\t\t" << this->strength << "\nDexterity:\t\t" << this->dexterity
		<< "\nIntelligence:\t\t" << this->intelligence << "\nWisdom:\t\t\t" << this->wisdom << "\nFaith:\t\t\t" << this->faith << "\n\n";

	return std::string(rtn.str());
}

std::string BehaviorStats::GetString()
{
	std::stringstream rtn;
	rtn << "Karma:\t\t\t" << this->karma << "\nWealth:\t\t\t" << this->wealth << "\n\n";
	return std::string(rtn.str());
}

std::string Level::GetString()
{
	std::stringstream rtn;
	rtn << "Current Level:\t\t" << this->currentLevel << "\nCurrent XP:\t\t" << this->currentExperience << "\nXP Needed:\t\t"
		<< this->experienceNeeded << "\n\n";
	return std::string(rtn.str());
}

std::string ActiveStats::GetString()
{
	std::stringstream rtn; 
	rtn << "Attack Power:\t\t" << this->attackPower << "\nMagic Power:\t\t" << this->magicPower << "\nPrayer Power:\t\t" << this->prayerPower
		<< "\nCasting Power:\t\t" << this->castingPower << "\n\nPhysical Stamina:\t" << this->physicalStamina << "\nMagical Attunement:\t"
		<< this->magicalAttunement << "\nDevotion:\t\t" << this->devotion << "\n\nDodge Chance:\t\t" << this->dodgeChance
		<< "\nPhysical Hit Chance:\t" << this->physicalHitChance << "\nMagic Hit Chance:\t" << this->magicalHitChance
		<< "\nMiracle Hit Chance:\t" << this->miracleHitChance << "\n\n";
	return std::string(rtn.str());
}
