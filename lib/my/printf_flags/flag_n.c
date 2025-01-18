/*
** EPITECH PROJECT, 2024
** flag_n
** File description:
** nbr_written_char
*/
#include "../my.h"

void flag_n(va_list list, arguments_t *arg)
{
    int *value = va_arg(list, int *);

    *value = arg->count;
}
