/*
** EPITECH PROJECT, 2024
** my_isneg
** File description:
** my_lib
*/
#include <unistd.h>

char my_isneg(int n)
{
    char signe;

    if (n >= 0) {
        signe = 'P';
    } else {
        signe = 'N';
    }
    return signe;
}
