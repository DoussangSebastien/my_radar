/*
** EPITECH PROJECT, 2024
** flag_di
** File description:
** print_int
*/
#include "../my.h"

static int my_intlen(int nb)
{
    int tmp = nb;
    int power = 0;
    int len = 0;

    while (tmp > 0){
        power++;
        tmp = tmp / 10;
    }
    while (power > 0){
        power--;
        len += 1;
    }
    return len;
}

void flag_di(va_list list, arguments_t *arg)
{
    int nb = va_arg(list, int);

    arg->count += my_intlen(nb);
    my_put_nbr(nb);
}
