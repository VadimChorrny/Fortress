#include "Catapult.h"

void Catapult::doShoot()
{
	Shooter::doShoot();
}

void Catapult::addAmmunition(const int& countAmmunition)
{
	Shooter::setCountAmmunition(countAmmunition);
}

void Catapult::print() const
{
	Shooter::print();
}
