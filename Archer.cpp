#include "Archer.h"

void Archer::addNewAmmunition(const int& countAmmunition)
{
	Shooter::setCountAmmunition(countAmmunition);
}

void Archer::doShoot()
{
	Shooter::doShoot();
}

void Archer::print() const
{
	Shooter::print();
}
