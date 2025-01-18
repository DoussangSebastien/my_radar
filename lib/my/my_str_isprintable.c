/*
** EPITECH PROJECT, 2024
** my_str_isprintable
** File description:
** my_lib
*/
static int my_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        if ((str[i] < 65 || str[i] > 122) || (str[i] < 97 && str[i] > 90)){
            return 0;
        }
    }
    return 1;
}

int my_str_isprintable(char const *str)
{
    if (!str)
        return 1;
    for (int i = 0; str[i] != '\0'; i++){
        if (!my_isalpha(str)){
            return 0;
        }
    }
    return 1;
}
