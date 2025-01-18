/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** create_all.c
*/
#include "./include/my.h"
#include "./include/struct.h"
#include "./include/radar.h"
#include <math.h>

static void get_rotation(plane_t *new_plane)
{
    float rotation = 0.0;
    float x = 0.0;
    float y = 0.0;

    if (!new_plane)
        return;
    x = new_plane->end.x - new_plane->start.x;
    y = new_plane->end.y - new_plane->start.y;
    rotation = atan2(y, x) * (180 / M_PI);
    sfSprite_setRotation(new_plane->sprite, rotation);
}

static void create_plane(plane_t *new_plane, texture_t *texture)
{
    float original_width = 285.0f;
    float original_height = 268.0f;
    float scaled_width = original_width * 0.17f;
    float scaled_height = original_height * 0.17f;

    new_plane->tow = 0;
    new_plane->active = 0;
    new_plane->texture = texture->plane_texture;
    new_plane->sprite = sfSprite_create();
    sfSprite_setTexture(new_plane->sprite, new_plane->texture, sfTrue);
    new_plane->hitbox = sfRectangleShape_create();
    sfSprite_setOrigin(new_plane->sprite,
        (sfVector2f){original_width / 2, original_height / 2});
    sfRectangleShape_setSize(new_plane->hitbox, (sfVector2f){20.0f, 20.0f});
    sfRectangleShape_setFillColor(new_plane->hitbox, sfTransparent);
    sfRectangleShape_setOutlineColor(new_plane->hitbox, sfRed);
    sfRectangleShape_setOutlineThickness(new_plane->hitbox, 2.0f);
    sfRectangleShape_setOrigin(new_plane->hitbox, (sfVector2f){10, 10});
    sfRectangleShape_setPosition(new_plane->hitbox, new_plane->start);
    get_rotation(new_plane);
}

plane_t *init_plane(char **params, texture_t *texture)
{
    plane_t *new_plane = malloc(sizeof(plane_t));
    sfVector2f start;
    sfVector2f end;
    int speed;
    int delay;

    if (!new_plane)
        return NULL;
    start = (sfVector2f){ my_getnbr(params[1]), my_getnbr(params[2]) };
    end = (sfVector2f){ my_getnbr(params[3]), my_getnbr(params[4]) };
    speed = my_getnbr(params[5]);
    delay = my_getnbr(params[6]);
    new_plane->start = start;
    new_plane->end = end;
    new_plane->current = start;
    new_plane->speed = speed;
    new_plane->delay = delay;
    new_plane->col = 0;
    create_plane(new_plane, texture);
    return new_plane;
}

static void create_tower(tower_t *new_tower, int radius)
{
    float original_width = 512.0f;
    float original_height = 512.0f;
    float scaled_width = original_width * 0.1f;
    float scaled_height = original_height * 0.1f;

    sfSprite_setOrigin(new_tower->sprite,
        (sfVector2f){original_width / 2, original_height / 2});
    sfCircleShape_setRadius(new_tower->hitbox, radius);
    sfCircleShape_setFillColor(new_tower->hitbox, sfTransparent);
    sfCircleShape_setOutlineColor(new_tower->hitbox, sfGreen);
    sfCircleShape_setOutlineThickness(new_tower->hitbox, 2.0f);
    sfCircleShape_setOrigin(new_tower->hitbox,
        (sfVector2f){(float)new_tower->radius, (float)new_tower->radius});
    sfCircleShape_setPosition(new_tower->hitbox, new_tower->pos);
}

tower_t *init_tower(char **params, texture_t *texture)
{
    tower_t *new_tower = malloc(sizeof(tower_t));
    sfVector2f position;
    int radius;

    if (!new_tower)
        return NULL;
    position = (sfVector2f){ my_getnbr(params[1]), my_getnbr(params[2]) };
    radius = my_getnbr(params[3]);
    new_tower->pos = position;
    new_tower->radius = radius;
    new_tower->texture = texture->tower_texture;
    new_tower->sprite = sfSprite_create();
    sfSprite_setTexture(new_tower->sprite, new_tower->texture, sfTrue);
    new_tower->hitbox = sfCircleShape_create();
    create_tower(new_tower, radius);
    return new_tower;
}

info_t *init_info(int len, object_t *array)
{
    info_t *info = malloc(sizeof(info_t));

    if (!info || !array)
        return NULL;
    info->S = 0;
    info->L = 0;
    info->time = 0;
    info->dt = 1.0f / 60;
    info->len = len;
    info->active_p = len;
    for (int i = len - 1; i > 0; i--) {
        if (array[i].t)
            info->active_p -= 1;
    }
    return info;
}
