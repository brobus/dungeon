#include "d_obj.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

char arr_cEnemyIcon[] = { 'k', 'g', 'e' };

Entity obj_Entity_New(Map M)
{
    Entity E;

    srand(time(NULL));
    E.cIcon = arr_cEnemyIcon[rand() % 3];
    E.iHealth = 100;

    switch (E.cIcon)
    {
    case 'k':
        strcpy(E.sRace, "Kobold");
        break;
    case 'g':
        strcpy(E.sRace, "Goblin");
    default:
        // This should never happen. You are being naughty if this appears.
        strcpy(E.sRace, "Unknown");
        E.iHealth = 10000;
        break;
    }

    E.iPosX = rand() % M.iBoundsX;
    E.iPosY = rand() % M.iBoundsY;

    return E;
}