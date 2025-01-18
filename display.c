/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** display.c
*/
#include "./include/radar.h"
#include "./include/struct.h"

void display_plane(sfRenderWindow *window, object_t *obj, int S, int L)
{
    if (!obj || !window)
        return;
    sfSprite_setScale(obj->p->sprite, (sfVector2f){0.17f, 0.17f});
    sfSprite_setPosition(obj->p->sprite, obj->p->current);
    if (!S)
        sfRenderWindow_drawSprite(window, obj->p->sprite, NULL);
    sfRectangleShape_setPosition(obj->p->hitbox, obj->p->current);
    if (!L)
        sfRenderWindow_drawRectangleShape(window, obj->p->hitbox, NULL);
}

void display_tower(sfRenderWindow *window, object_t *obj, int S, int L)
{
    if (!obj || !window || !obj->t)
        return;
    sfSprite_setScale(obj->t->sprite, (sfVector2f){0.1f, 0.1f});
    sfSprite_setPosition(obj->t->sprite, obj->t->pos);
    if (!S)
        sfRenderWindow_drawSprite(window, obj->t->sprite, NULL);
    if (!L)
        sfRenderWindow_drawCircleShape(window, obj->t->hitbox, NULL);
}
