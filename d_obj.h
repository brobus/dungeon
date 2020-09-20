#ifndef D_OBJ_H
#define D_OBJ_H


typedef struct
{
    char cIcon;

    char sRace[8]; // --WIP Determine max race name length

    int iPosX,
        iPosY,
        iLevel,
        iHealth;
} Entity;

typedef struct
{
    char MAP[255][255];

    int iBoundsX,
        iBoundsY;

} Map;

/// ENTITY FUNCTIONS | Defined in d_entity.h ///

Entity  obj_Entity_New(Map M);      // Generic Entity Creation   
Entity  obj_Entity_New_Special();   // Player Entity Creation
int     obj_Entity_Del();           // --WIP

/// MAP FUNCTIONS | Defined in --WIP ///

Map     obj_Map_New();              // Generic Map Creation
int     obj_Map_Del();              // --WIP

#endif // D_OBJ_H //