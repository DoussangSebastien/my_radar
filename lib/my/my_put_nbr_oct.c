/*
** EPITECH PROJECT, 2024
** my_put_nbr_oct
** File description:
** int_to_oct
*/
#include "my.h"

int my_put_nbr_oct(unsigned int nb)
{
    unsigned int tmp = nb;
    int power = 0;
    char *base = "01234567";

    while (tmp > 0){
        tmp /= 8;
        power += 1;
    }
    while (power > 0){
        power--;
        my_putchar(base[nb / my_compute_power_rec(8, power) % 8]);
    }
    return 0;
}
