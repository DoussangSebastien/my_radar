/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** plane_mvt.c
*/

#include "./include/radar.h"
#include "./include/struct.h"
#include "./include/my.h"

void destroy_plane(object_t *obj)
{
    if (!obj)
        return;
    obj->p = NULL;
}

void move_plane(object_t *obj, sfRenderWindow *window, info_t *info)
{
    float new_x = 0;
    float new_y = 0;
    float distance = 0;

    if ((!obj->p && !obj->t) || !obj->p || !info || !window)
        return;
    if (info->time >= obj->p->delay){
        obj->p->active = 1;
        new_x = obj->p->end.x - obj->p->current.x;
        new_y = obj->p->end.y - obj->p->current.y;
        distance = sqrtf((new_x * new_x) + (new_y * new_y));
        if (distance <= ((info->dt) * obj->p->speed) || obj->p->col){
            destroy_plane(obj);
            info->active_p -= 1;
            return;
        }
        display_plane(window, obj, info->S, info->L);
        obj->p->current.x += (new_x / distance) * ((info->dt) * obj->p->speed);
        obj->p->current.y += (new_y / distance) * ((info->dt) * obj->p->speed);
    }
}
