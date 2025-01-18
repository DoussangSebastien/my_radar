/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** header
*/

#ifndef RADAR_H_
    #define RADAR_H_
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include "struct.h"
    #include <math.h>
void radar(object_t *array, int len);
object_t *parse(char const *av[]);
plane_t *init_plane(char **params, texture_t *texture);
tower_t *init_tower(char **params, texture_t *texture);
void display_tower(sfRenderWindow *window, object_t *obj, int S, int L);
void display_plane(sfRenderWindow *window, object_t *obj, int S, int L);
void background(sfRenderWindow *window);
int get_len(char const *av[]);
void free_all(object_t *array, int len, info_t *info);
void help(void);
info_t *init_info(int len, object_t *array);
void destroy_plane(object_t *obj);
void move_plane(object_t *obj, sfRenderWindow *window, info_t *info);
void display_time(sfRenderWindow *window, sfClock *clock, info_t *info);
void colision_plane(object_t *array, object_t *curr, info_t *info, int i_curr);

#endif
