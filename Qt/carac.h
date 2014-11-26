#ifndef CARAC_H
#define CARAC_H

#include <QApplication>
#include <QString>

#include "weapon.h"

class Carac
{
    public:
        Carac();
        void setHealth(int c_health);
        void setMaxHealth(int c_maxHealth);
        void setName(QString c_name);
        void changeWeapon(int c_damage, QString c_name);
        int getHealth();
        int getMaxHealth();
        QString getName();
        Weapon* getWeapon();
    protected:
        int health;
        int maxHealth;
        QString name;
        Weapon* weap;
private:
};

#endif // CARAC_H
