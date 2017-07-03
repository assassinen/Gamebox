#ifndef GAMES_H
#define GAMES_H

#include "libgame.h"
extern game_instance BackspaceInvaders;
extern game_instance Snake;
extern game_instance Tester;
extern game_instance Raycaster;
extern game_instance Dump;
#endif

#ifdef _OUTPUT_INSTANCES
game_instance instances[] = {
    BackspaceInvaders,
    Snake,
    Raycaster,
    Tester,
    Dump,
};
#endif