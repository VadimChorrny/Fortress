#pragma once
#include "Shooter.h"
#include "Lib.h"
class Archer :
   virtual public Shooter
{
public:
	Archer(const string& namePerson, const string& nameWeapon, const int& countAmmunition)
		:Shooter(namePerson,nameWeapon,countAmmunition)
	{}
	void addNewAmmunition(const int& countAmmunition);
	void doShoot();
	void print() const;
private:

};

