/*
** EPITECH PROJECT, 2024
** my_printf
** File description:
** print_value
*/
#include "my.h"
#include "flags.h"

void (*const flags[]) (va_list list, arguments_t *arg) = {
    ['d'] = flag_di,
    ['i'] = flag_di,
    ['s'] = flag_s,
    ['c'] = flag_c,
    ['o'] = flag_o,
    ['u'] = flag_u,
    ['x'] = flag_x,
    ['X'] = flag_x_up,
    ['f'] = flag_f,
    ['e'] = flag_e,
    ['E'] = flag_e_up,
    ['n'] = flag_n,
    ['p'] = flag_p,
    ['%'] = flag_per
};

static int error_case(arguments_t *arg)
{
    free(arg);
    return 84;
}

static int good_case(arguments_t *arg)
{
    free(arg);
    return 0;
}

int my_printf(const char *form, ...)
{
    va_list list;
    arguments_t *arg = malloc(sizeof(arguments_t));

    arg->form = form;
    arg->count = 0;
    arg->precision = 6;
    va_start(list, form);
    if (check_error(form, list, arg))
        return error_case(arg);
    for (int i = 0; i < my_strlen(form); i++){
        if (form[i] == '%'){
            flags[form[check_flag(form, i, arg)]](list, arg);
            i = check_flag(form, i, arg);
        } else
            my_putchar(form[i]);
        arg->count += 1;
    }
    va_end(list);
    return good_case(arg);
}
