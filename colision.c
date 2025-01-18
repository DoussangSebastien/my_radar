/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** colision.c
*/
#include "./include/radar.h"
#include "./include/struct.h"

static void check_collision(object_t *curr, object_t *other, int size,
    int *coords)
{
    int curr_x = coords[0];
    int curr_y = coords[1];
    int arr_x = coords[2];
    int arr_y = coords[3];

    if ((curr_x + size > arr_x && arr_x + size > curr_x &&
        curr_y + size > arr_y && arr_y + size > curr_y) &&
        !(curr->p->tow && !other->p->tow)) {
        curr->p->col = 1;
        other->p->col = 1;
        curr->p->active = 0;
        other->p->active = 0;
    }
}

static int inside_tower_area(object_t *curr, object_t *tower)
{
    int dx;
    int dy;
    int distance_squared;

    if (!tower->t)
        return 0;
    dx = curr->p->current.x - tower->t->pos.x;
    dy = curr->p->current.y - tower->t->pos.y;
    distance_squared = dx * dx + dy * dy;
    return distance_squared <= (tower->t->radius * tower->t->radius) ? 1 : 0;
}

void colision_plane(object_t *array, object_t *curr, info_t *info, int i_curr)
{
    int size = 20;
    int coords[4] = {0};

    if (!curr->p || !curr->p->active)
        return;
    coords[0] = curr->p->current.x;
    coords[1] = curr->p->current.y;
    for (int i = info->len - 1; i >= 0; i--) {
        if (!array[i].t)
            continue;
        if (inside_tower_area(curr, &array[i]))
            return;
    }
    for (int i = info->len - 1; i >= 0; i--) {
        if (!array[i].p || i == i_curr || !array[i].p->active)
            continue;
        coords[2] = array[i].p->current.x;
        coords[3] = array[i].p->current.y;
        check_collision(curr, &array[i], size, coords);
    }
}
