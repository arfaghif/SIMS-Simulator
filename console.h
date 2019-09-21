#ifndef CONSOLE_H
#define CONSOLE_H

#include "boolean.h"
#include "theSims.h"

void begin(SIMS *charSims);

void infoMenu();

void infoSubMenu(int jenis);

void doingGame(SIMS *charSims);

boolean isFinish(SIMS charSims, boolean *win);

#endif