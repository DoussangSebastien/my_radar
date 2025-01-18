/*
** EPITECH PROJECT, 2024
** put_nbr_hex
** File description:
** int to hex
*/
#include "my.h"

int my_put_nbr_hex(unsigned int nb, char case_type)
{
    unsigned int tmp = nb;
    int power = 0;
    char *base = "0123456789abcdef";

    if (case_type == 'U')
        base = "0123456789ABCDEF";
    while (tmp > 0){
        tmp /= 16;
        power += 1;
    }
    while (power > 0){
        power--;
        my_putchar(base[nb / my_compute_power_rec(16, power) % 16]);
    }
    return 0;
}
