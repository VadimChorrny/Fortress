#pragma once
#include "Lib.h"
class Shooter
{
public:
	Shooter(const string& namePerson, const string& nameWeapon, const int& countAmmunition)
	{
		setNameWeapon(nameWeapon);
		setCountAmmunition(countAmmunition);
		setNamePerson(namePerson);
	}

	void doShoot();
	void print() const;

	// set
	void setNameWeapon(const string& nameWeapon);
	void setCountAmmunition(const int& countAmmunition);
	void setNamePerson(const string& namePerson);

private:
	string namePerson;
	string nameWeapon;
	int countAmmunition;
};

