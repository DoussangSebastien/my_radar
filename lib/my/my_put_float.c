/*
** EPITECH PROJECT, 2024
** my_put_float
** File description:
** display_float
*/
#include "my.h"

int my_put_float(double nb, int precision)
{
    int nb_int = nb;
    double nb_dec = nb - nb_int;

    my_put_nbr(nb_int);
    if (precision)
        my_putchar('.');
    nb_dec += 0.4 / my_compute_power_rec(10, precision);
    for (int i = 0; i < precision; i++) {
        nb_dec *= 10;
        if ((int) nb_dec == 0)
            my_putchar('0');
        my_put_nbr((int) nb_dec);
        nb_dec -= (int) nb_dec;
    }
}
