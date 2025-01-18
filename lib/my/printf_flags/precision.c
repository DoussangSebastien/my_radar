/*
** EPITECH PROJECT, 2024
** printf
** File description:
** check and return precision
*/
#include "../my.h"

static int get_end(char const *form, int i, int end)
{
    while (form[i] >= '0' && form[i] <= '9'){
        end += 1;
        i += 1;
    }
    return end;
}

void precision(char const *form, arguments_t *arg, int j)
{
    int start = 0;
    int end = 1;
    int index = 0;
    char *precision;

    for (int i = j; i < my_strlen(form); i++){
        if (form[i] == '.'){
            i += 1;
            start = i;
            end = get_end(form, i, end);
            precision = malloc(sizeof(char) * (end));
        }
        if (start && (form[i] >= '0' && form[i] <= '9')){
            precision[index] = form[i];
            index += 1;
        }
    }
    arg->precision = my_getnbr(precision);
    free(precision);
}
