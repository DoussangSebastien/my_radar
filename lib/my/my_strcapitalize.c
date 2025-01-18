/*
** EPITECH PROJECT, 2024
** my_strcapitalize
** File description:
** my_lib
*/
static char *my_strupcase2(char *str, int i)
{
    if (str[i] >= 97 && str[i] <= 122){
        str[i] -= 32;
    }
    return str;
}

char *my_strcapitalize(char *str)
{
    if (!str)
        return "wrong input";
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] <= 90 && str[i] >= 65){
            str[i] += 32;
        }
        if ((i == 0 || str[i - 1] == 32)){
            my_strupcase2(str, i);
        }
        if ((str[i - 1] == 43 || str[i - 1] == 45)){
            my_strupcase2(str, i);
        }
    }
    return str;
}
