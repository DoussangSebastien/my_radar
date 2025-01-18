/*
** EPITECH PROJECT, 2024
** flag_f
** File description:
** display_float
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

void flag_f(va_list list, arguments_t *arg)
{
    double nb = va_arg(list, double);

    my_put_float(nb, arg->precision);
    arg->count += my_intlen((int) nb) + arg->precision + 1;
    arg->precision = 6;
}
//precision a faire plus tard
