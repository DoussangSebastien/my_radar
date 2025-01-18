/*
** EPITECH PROJECT, 2025
** my_radar
** File description:
** test.c
*/

#include "./include/radar.h"

sfSprite *loadsprite(char *filepath)
{
    sfSprite *sprite; 
    sfTexture *texture; 

    if (!filepath)
        return NULL;
    sprite = sfSprite_create();
    texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(sprite, texture);
    return sprite;

}
