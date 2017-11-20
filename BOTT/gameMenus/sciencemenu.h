#ifndef SCIENCEMENU_H
#define SCIENCEMENU_H

#include "gamemenu.h"

class GameMenuHandler;

class ScienceMenu : public GameMenu
{
    Q_OBJECT

public:
    ScienceMenu();

signals:
    // SC - Science Center
    void SC_WaterWheelExplored();
    void SC_BlastFurnaceExplored(); // blast furnace - домна
    void SC_ArtilleryExplored();
    void SC_ArquebusExplored();
    void SC_SpinningWheelExplored(); // spinning wheel - прялка

    // GameMenu interface
public:
    void processSelectAction(int );
    void connectWithBuild(QGraphicsPixmapItem *);
};

#endif // SCIENCEMENU_H