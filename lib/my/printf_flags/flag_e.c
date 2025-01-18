/*
** EPITECH PROJECT, 2024
** flag_e
** File description:
** display double with e+
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

static int count_e(double nb, int precision)
{
    int total = my_intlen((int) nb) + precision + 4;

    return total;
}

void flag_e(va_list list, arguments_t *arg)
{
    double nb = va_arg(list, double);
    int power = 0;

    arg->count += count_e(nb, arg->precision);
    while (nb >= 10.0){
        nb /= 10.0;
        power++;
    }
    if (nb < 1.0 && nb > 0.0){
        nb *= 10.0;
        power--;
    }
    my_put_float(nb, arg->precision);
    my_putstr("e+");
    if (power < 10 && power >= 0){
        my_putchar('0');
        my_put_nbr(power);
    } else
        my_put_nbr(power);
    arg->precision = 6;
}
