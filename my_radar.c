/*
** EPITECH PROJECT, 2024
** seb
** File description:
** bs_radar.c
*/
#include "./include/radar.h"
#include "./include/my.h"
#include "./include/struct.h"

static void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

static void analyse_events(sfRenderWindow *win, sfEvent event, info_t *info)
{
    while (sfRenderWindow_pollEvent(win, &event)) {
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyQ)
            close_window(win);
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyS)
            info->S = !info->S;
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyL)
            info->L = !info->L;
    }
}

static sfRenderWindow *create_window(void)
{
    sfVideoMode mode = {1920, 1080, 32};

    return sfRenderWindow_create(mode, "My Radar", sfClose | sfResize, NULL);
}

void radar(object_t *array, int len)
{
    sfRenderWindow *window = create_window();
    sfEvent event;
    sfClock *clock = sfClock_create();
    info_t *info = init_info(len, array);

    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window) && info->active_p) {
        analyse_events(window, event, info);
        background(window);
        display_time(window, clock, info);
        for (int i = len - 1; i >= 0; i--) {
            move_plane(&array[i], window, info);
            colision_plane(array, &array[i], info, i);
            display_tower(window, &array[i], info->S, info->L);
        }
        sfRenderWindow_display(window);
    }
    free_all(array, len, info);
    sfRenderWindow_destroy(window);
    sfClock_destroy(clock);
}
