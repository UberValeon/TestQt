#ifndef ITEM_H
#define ITEM_H

#include <QWidget>
#include <QString>

class Item
{
    public:
        Item();
        void setName();
        QString getName();
    private:
        QString name;
};

#endif // ITEM_H
