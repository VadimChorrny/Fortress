#pragma once
#include "ArcherTower.h"
#include "Shooter.h"
#include "Catapult.h"
class Fortress :
	public ArcherTower, public Catapult
{
public:
	Fortress(const int& ammoArcherTower,const int& ammoCatapult,const double& amountWall)
		:ArcherTower(ammoArcherTower),Catapult("def","def",ammoCatapult)
	{
		setWallAmount(amountWall);
	}
	void doShoot();
	void addAmmunition(const int& countAmmunition);
	void setWallAmount(const double& amountWall);
private:
	double amountWall;
};

