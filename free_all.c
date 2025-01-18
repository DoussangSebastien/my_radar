/*
** EPITECH PROJECT, 2024
** my_radar
** File description:
** free_all.c
*/
#include "./include/struct.h"
#include "./include/radar.h"

void free_all(object_t *array, int len, info_t *info)
{
    free(info);
    free(array);
}
