/*
** EPITECH PROJECT, 2024
** flag_s
** File description:
** flag_s
*/
#include "../my.h"

void flag_s(va_list list, arguments_t *arg)
{
    char *s = va_arg(list, char *);

    arg->count += my_strlen(s);
    my_putstr(s);
}
