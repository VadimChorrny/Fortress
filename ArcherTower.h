#pragma once
#include "Archer.h"
#include "Range.h"
#include "Shooter.h"
class ArcherTower :
    public Range,public Archer
{
public:
	ArcherTower(const int& countAmmunition)
		:Range("ArcherTower","Weapon",0),Archer("ArcherTower","Weapon",0),Shooter("ArcherTower","Weapon",100)
	{}
	void doShoot();
private:
};

