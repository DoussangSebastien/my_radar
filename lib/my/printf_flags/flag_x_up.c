/*
** EPITECH PROJECT, 2024
** printf
** File description:
** dec to hex
*/
#include "../my.h"

static int my_intlen(int nb)
{
    int tmp = nb;
    int power = 0;
    int len = 0;

    while (tmp > 0){
        power++;
        tmp = tmp / 16;
    }
    while (power > 0){
        power--;
        len += 1;
    }
    return len;
}

void flag_x_up(va_list list, arguments_t *arg)
{
    int nb = va_arg(list, int);

    my_put_nbr_hex(nb, 'U');
}
