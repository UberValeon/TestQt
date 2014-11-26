#ifndef WEAPON_H
#define WEAPON_H

#include <QApplication>
#include <QString>

class Weapon
{
    public:
        Weapon();
        Weapon(int c_damage, QString c_name);
        void setDamage(int c_damage);
        void setName(QString c_name);
        int getDamage();
        QString getName();
    private:
        int damage;
        QString name;
};

#endif // WEAPON_H
