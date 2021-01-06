#include "Shooter.h"
#include "Archer.h"
#include "Range.h"

int main()
{
	Shooter shooter("Shooter","M4a1", 60);
	shooter.doShoot();
	cout << endl;
	shooter.print();

	cout << endl;
	cout << endl;
	cout << endl;

	Archer archer("Archer","AK-47", 50);
	archer.doShoot();
	cout << endl;
	archer.print();

	cout << endl;
	cout << endl;
	cout << endl;

	Range range("Range", "Deagle", 7);
	range.doShoot();
	range.print();

	cout << endl;
	cout << endl;
	cout << endl;


}