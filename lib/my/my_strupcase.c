/*
** EPITECH PROJECT, 2024
** my_strupcase
** File description:
** my_lib
*/
char *my_strupcase(char *str)
{
    if (!str)
        return "wrong input";
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 97 && str[i] <= 122){
            str[i] -= 32;
        }
    }
    return str;
}
