/*
** EPITECH PROJECT, 2024
** flag_u
** File description:
** unsigned_int_to_dec
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

static int my_put_nbr_unsigned(unsigned int nb)
{
    unsigned int tmp = nb;
    int power = 0;

    while (tmp > 0){
        power++;
        tmp = tmp / 10;
    }
    while (power > 0){
        power--;
        my_putchar(nb / my_compute_power_rec(10, power) % 10 + 48);
    }
    return 0;
}

void flag_u(va_list list, arguments_t *arg)
{
    unsigned int nb = va_arg(list, unsigned int);

    my_put_nbr_unsigned(nb);
    arg->count += my_intlen(nb);
}
