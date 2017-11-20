#include "sciencemenu.h"
#include "gamemenuhandler.h"
#include <QDebug>

ScienceMenu::ScienceMenu()
{
    nameOfMenu = new QGraphicsPixmapItem();
    nameOfMenu->setPixmap(QPixmap(":images/images/mScienceCentre.png"));

    QGraphicsPixmapItem * m1 = new QGraphicsPixmapItem(),
                        * m2 = new QGraphicsPixmapItem(),
                        * m3 = new QGraphicsPixmapItem(),
                        * m4 = new QGraphicsPixmapItem(),
                        * m5 = new QGraphicsPixmapItem();

    m1->setPixmap(QPixmap(":images/images/sc1.png"));
    m2->setPixmap(QPixmap(":images/images/sc2.png"));
    m3->setPixmap(QPixmap(":images/images/sc3.png"));
    m4->setPixmap(QPixmap(":images/images/sc4.png"));
    m5->setPixmap(QPixmap(":images/images/sc5.png"));
    menuItems.push_back(m1);
    menuItems.push_back(m2);
    menuItems.push_back(m3);
    menuItems.push_back(m4);
    menuItems.push_back(m5);
}

void ScienceMenu::processSelectAction(int currentItem)
{
    if(currentItem == 0)
        emit SC_WaterWheelExplored();
    if(currentItem == 1)
        emit SC_BlastFurnaceExplored();
    if(currentItem == 2)
        emit SC_ArtilleryExplored();
    if(currentItem == 3)
        emit SC_ArquebusExplored();
    if(currentItem == 4)
        emit SC_SpinningWheelExplored();
}

void ScienceMenu::connectWithBuild(QGraphicsPixmapItem * build)
{
    /*connect(this, SIGNAL(SC_WaterWheelExplored()), build, SLOT());
    connect(this, SIGNAL(SC_BlastFurnaceExplored()), build, SLOT());
    connect(this, SIGNAL(SC_ArtilleryExplored()), build, SLOT());
    connect(this, SIGNAL(SC_ArquebusExplored()), build, SLOT());
    connect(this, SIGNAL(SC_SpinningWheelExplored()), build, SLOT());*/
}