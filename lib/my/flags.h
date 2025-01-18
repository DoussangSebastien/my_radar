/*
** EPITECH PROJECT, 2024
** header
** File description:
** flags_header
*/

#ifndef FLAGS_H_
    #define FLAGS_H_
int check_flag(const char *form, int i, arguments_t *arg);
int check_error(const char *form, va_list list, arguments_t *arg);
void precision(char const *form, arguments_t *arg, int j);
void flag_c(va_list list, arguments_t *arg);
void flag_s(va_list list, arguments_t *arg);
void flag_di(va_list list, arguments_t *arg);
void flag_o(va_list list, arguments_t *arg);
void flag_u(va_list list, arguments_t *arg);
void flag_x(va_list list, arguments_t *arg);
void flag_x_up(va_list list, arguments_t *arg);
void flag_f(va_list list, arguments_t *arg);
void flag_e(va_list list, arguments_t *arg);
void flag_e_up(va_list list, arguments_t *arg);
void flag_n(va_list list, arguments_t *arg);
void flag_p(va_list list, arguments_t *arg);
void flag_per(va_list list, arguments_t *arg);
#endif /* FLAGS_H_ */
