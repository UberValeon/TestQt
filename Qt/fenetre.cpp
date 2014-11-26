#include "fenetre.h"

Fenetre::Fenetre() : QWidget()
{
    setFixedSize(300,150);

    btnQuit = new QPushButton("Quitter", this);
    btnQuit->setCursor(Qt::PointingHandCursor);
    btnQuit->setFixedSize(70, 30);
    btnQuit->move(230,120);


    lcdNum  = new QLCDNumber(this);
    lcdNum->setSegmentStyle(QLCDNumber::Flat);
    lcdNum->setFixedSize(70, 30);
    lcdNum->move(115, 10);

    sld = new QSlider(Qt::Horizontal, this);

    sld->setGeometry(100, 30, 30, 30);
    sld->move(75, 50);

    QObject::connect(btnQuit,SIGNAL(clicked()), qApp, SLOT(quit()));
}




