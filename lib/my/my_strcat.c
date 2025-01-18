/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** task02
*/
#include "my.h"

char *my_strcat(char *dest, char const *scr, int index)
{
    int len = my_strlen(dest) + my_strlen(scr);
    char *result = malloc(sizeof(char) * len);

    if (!dest || !scr)
        return "wrong input";
    for (int i = index; i < len; i++){
        if (i < my_strlen(scr))
            result[i] = scr[i];
        else
            result[i] = dest[i - my_strlen(scr)];
    }
    return result;
}
