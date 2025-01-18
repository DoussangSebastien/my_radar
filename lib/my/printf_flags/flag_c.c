/*
** EPITECH PROJECT, 2024
** flag_c
** File description:
** flag_c
*/
#include "../my.h"

void flag_c(va_list list, arguments_t *arg)
{
    arg->count += 1;
    my_putchar((char) va_arg(list, int));
}
