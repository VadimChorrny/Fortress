#include "Fortress.h"

void Fortress::doShoot()
{
	Archer::doShoot();
	Catapult::doShoot();
}

void Fortress::addAmmunition(const int& countAmmunition)
{
	Catapult::addAmmunition(countAmmunition);
	ArcherTower::addAmmunition(countAmmunition);
}

void Fortress::setWallAmount(const double& amountWall)
{
	if (amountWall != 0)
		this->amountWall = amountWall;
	else
		cerr << "error with wall amount" << endl;
}
