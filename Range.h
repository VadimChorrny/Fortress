#pragma once
#include "Shooter.h"
class Range :
    public Shooter
{
public:
	Range(const string& namePerson, const string& nameWeapon, const int& countAmmunition)
		:Shooter(namePerson,nameWeapon,countAmmunition)
	{}
	void doShoot();
	void addAmmunition(const int& countAmmunition);
	void print() const;
private:
};

