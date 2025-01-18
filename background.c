/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** background.c
*/
#include "./include/radar.h"

void background(sfRenderWindow *window)
{
    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {1.5f, 1.7f};

    texture = sfTexture_createFromFile("./img/background.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}
