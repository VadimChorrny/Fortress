#include "Shooter.h"

void Shooter::doShoot()
{
    int MAX_COUNT_AMMUNITION = 10;
    if (countAmmunition != 0 && countAmmunition <= MAX_COUNT_AMMUNITION)
    {
        cout << "______________________" << endl;
        cout << "Shooting:\t" << namePerson << endl;
        cout << "Name:\t" << nameWeapon << endl;
        cout << "______________________" << endl;
        --countAmmunition;
    }
    else
    {
        cerr << "___problem with count ammunition___" << endl;
        cerr << nameWeapon << endl;
    }

}

void Shooter::print() const
{
    cout << "~~~~~~~~~~~~~~PRINT~~~~~~~~~~~~~~" << endl;
    cout << "Name person:\t" << namePerson << endl;
    cout << "Name weapon:\t" << nameWeapon << endl;
    cout << "Count weapon:\t" << countAmmunition << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void Shooter::setNameWeapon(const string& nameWeapon)
{
    if (!nameWeapon.empty())
        this->nameWeapon = nameWeapon;
}

void Shooter::setCountAmmunition(const int& countAmmunition)
{
    this->countAmmunition += countAmmunition;
}

void Shooter::setNamePerson(const string& namePerson)
{
    if (!namePerson.empty())
        this->namePerson = namePerson;
    else
        cerr << "error with name person" << endl;
}



