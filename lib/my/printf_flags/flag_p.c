/*
** EPITECH PROJECT, 2024
** printf
** File description:
** adress to hex
*/
#include "../my.h"

static int my_put_hex_long(unsigned long nb, char case_type)
{
    unsigned long tmp = nb;
    int power = 0;
    char base[] = "0123456789abcdef";

    while (tmp > 0){
        tmp /= 16;
        power += 1;
    }
    while (power > 0){
        power--;
        if (power > 0)
            my_putchar(base[nb / my_compute_power_rec(16, power) % 16]);
    }
    return 0;
}

void flag_p(va_list list, arguments_t *arg)
{
    long int value = va_arg(list, long int);

    my_putstr("0x");
    my_put_hex_long(value, 'L');
}
