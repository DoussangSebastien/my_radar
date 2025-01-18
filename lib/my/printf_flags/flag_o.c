/*
** EPITECH PROJECT, 2024
** flag_o
** File description:
** display_int_to_oct
*/
#include "../my.h"

static int my_intlen(int nb)
{
    int tmp = nb;
    int power = 0;
    int len = 0;

    while (tmp > 0){
        power++;
        tmp = tmp / 8;
    }
    while (power > 0){
        power--;
        len += 1;
    }
    return len;
}

void flag_o(va_list list, arguments_t *arg)
{
    unsigned int nb = va_arg(list, unsigned int);

    arg->count += my_intlen(nb);
    my_put_nbr_oct(nb);
}
