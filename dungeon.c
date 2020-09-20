#include <stdlib.h>
#include <stdio.h>
#include "d_obj.h"
//#include "d_def.h"

/*
    Place enemies in array in map? Draw map then overwrite map w/ enemie sprites?

*/

int main()
{
    Map m = obj_Map_New();
    Entity e = obj_Entity_New(m);
    printf("%c\nX:%s Y:%d\n", e.cIcon, e.iPosX, e.iPosY);
}