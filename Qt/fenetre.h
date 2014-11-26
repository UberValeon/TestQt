#ifndef FENETRE_H
#define FENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSlider>
#include <QLCDNumber>

class Fenetre : public QWidget
{
    public:
        Fenetre();
    private:
        QPushButton *btnQuit;
        QLCDNumber * lcdNum;
        QSlider *sld;
};

#endif // FENETRE_H
