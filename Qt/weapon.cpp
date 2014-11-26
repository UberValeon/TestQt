#include "weapon.h"

Weapon::Weapon() : damage(1), name("Bare Hands")
{
}

Weapon::Weapon(int c_damage, QString c_name)
{
    damage = c_damage;
    name = c_name;
}

void Weapon::setDamage(int c_damage)
{
    damage = c_damage;
}

void Weapon::setName(QString c_name)
{
    name = c_name;
}

int Weapon::getDamage()
{
    return damage;
}

QString Weapon::getName()
{
    return name;
}




