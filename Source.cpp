#include "Shooter.h"
#include "Archer.h"
#include "Range.h"
#include <ctime>
#include "Fortress.h"
class Game
{
public:
	void game();
private:
};

int main()
{
	//Shooter shooter("Shooter","M4a1", 60);
	//shooter.doShoot();
	//cout << endl;
	//shooter.print();

	//cout << endl;
	//cout << endl;
	//cout << endl;

	//Archer archer("Archer","AK-47", 50);
	//archer.doShoot();
	//cout << endl;
	//archer.print();

	//cout << endl;
	//cout << endl;
	//cout << endl;

	//Range range("Range", "Deagle", 7);
	//range.doShoot();
	//range.print();

	//cout << endl;
	//cout << endl;
	//cout << endl;

	Fortress fortressOne(100,100,4.5);
	Fortress fortressTwo(100, 100, 5.5);
	Game game;
	game.game();
}

void Game::game()
{
	double fortressOne = 100;
	double fortressTwo = 100;
	double damageArcher = 4.4;
	double damageRange = 5.5;
	double damageCatapult = 6.6;
	srand(time(NULL));
	int randAmmo = 1 + rand() % 6;

	if (randAmmo % 2 == 0) {
		fortressTwo -= damageRange;

	}
	else if (randAmmo == 5) {
		fortressTwo -= damageCatapult;
	}
	else {
		fortressTwo -= damageArcher;

	}
	randAmmo = 1 + rand() % 6;
	if (randAmmo % 2 == 0) {
		fortressOne -= damageRange;

	}
	else if (randAmmo == 5) {
		fortressOne -= damageCatapult;

	}
	else {
		fortressOne -= damageArcher;

	}
	cout << "Winner:\t";
	if (fortressOne > fortressTwo)
		cout << "fortress one" << endl;
	else if (fortressTwo > fortressOne)
		cout << "fortress two" << endl;
	else
		cout << "no winner" << endl;

}
