/*
** EPITECH PROJECT, 2024
** flag_per
** File description:
** flag_per
*/
#include "../my.h"

void flag_per(va_list list, arguments_t *arg)
{
    arg->count += 1;
    my_putchar('%');
}
