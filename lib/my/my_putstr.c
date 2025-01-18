/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** my_lib
*/
#include <unistd.h>

static void my_putchar(char c)
{
    if (write(1, &c, 1) == -1)
        return;
}

int my_putstr(char const *str)
{
    int i = 0;

    if (!str)
        return 84;
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
