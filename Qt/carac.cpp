#include "carac.h"

Carac::Carac() : health(25), maxHealth(25), name("Peasent")
{
    weap = new Weapon();
}

void Carac::setHealth(int c_health)
{
    health = c_health;
}

void Carac::setMaxHealth(int c_maxHealth)
{
    maxHealth = c_maxHealth;
}

void Carac::setName(QString c_name)
{
    name = c_name;
}

void Carac::changeWeapon(int c_damage, QString c_name)
{
    Weapon* w = weap;
    delete w;
    weap = new Weapon(c_damage, c_name);
}

int Carac::getHealth()
{
    return health;
}

int Carac::getMaxHealth()
{
    return maxHealth;
}

QString Carac::getName()
{
    return name;
}

Weapon* Carac::getWeapon()
{
    return weap;
}






