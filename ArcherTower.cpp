#include "ArcherTower.h"

void ArcherTower::doShoot()
{
	cout << "~~~~WORKED SHOOT ARCHER-TOWER~~~~" << endl;
	Archer::doShoot();
	Range::doShoot();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void ArcherTower::print() const
{
	Range::print();
	Archer::print();
}
