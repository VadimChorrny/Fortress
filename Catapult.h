#pragma once
#include "Shooter.h"
class Catapult :
    public Shooter
{
public:
	Catapult(const string& namePerson, const string& nameWeapon, const int& countAmmunition)
		:Shooter(namePerson,nameWeapon,countAmmunition)
	{}
	void doShoot();
	void addAmmunition(const int& countAmmunition);
	void print() const;
private:
};

