/*
** EPITECH PROJECT, 2024
** check_error
** File description:
** check_for_error
*/
#include "../my.h"
#include "../flags.h"

int check_error(const char *form, va_list list, arguments_t *arg)
{
    if (!form)
        return 1;
    for (int i = 0; i < my_strlen(form); i++) {
        if (form[i] == '%' && check_flag(form, i, arg) == 0){
            return 1;
        }
        if (form[i] == '%' && form[check_flag(form, i, arg)] == '%')
            i = check_flag(form, i, arg);
    }
    return 0;
}
