#include "Range.h"

void Range::doShoot()
{
	Shooter::doShoot();
}

void Range::addAmmunition(const int& countAmmunition)
{
	Shooter::setCountAmmunition(countAmmunition);
}

void Range::print() const
{
	Shooter::print();
}
