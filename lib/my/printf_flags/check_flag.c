/*
** EPITECH PROJECT, 2024
** check_flag
** File description:
** check_flag
*/
#include "../my.h"
#include "../flags.h"

int check_flag(const char *form, int i, arguments_t *arg)
{
    for (int j = i + 1; form[j] != '\0'; j += 1){
        if (form[j] == '.')
            precision(form, arg, j);
        if (form[j] == 'c' || form[j] == 's')
            return j;
        if (form[j] == 'd' || form[j] == 'i')
            return j;
        if (form[j] == 'o' || form[j] == 'u')
            return j;
        if (form[j] == 'x' || form[j] == 'X')
            return j;
        if (form[j] == 'f' || form[j] == 'e' || form[j] == 'E')
            return j;
        if (form[j] == 'n' || form[j] == 'g')
            return j;
        if (form[j] == 'p' || form[j] == '%')
            return j;
    }
    return 0;
}
