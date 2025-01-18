/*
** EPITECH PROJECT, 2024
** my_strncmp
** File description:
** my_lib
*/
int my_strncmp(char const *s1, char const *s2, int n)
{
    int result1 = 0;
    int result2 = 0;

    if (!s1 || !s2 || n < 0)
        return 84;
    for (int i = 0; s1[i] != '\0' && i != n; i++){
        result1 += s1[i];
    }
    for (int j = 0; s2[j] != '\0' && j != n; j++){
        result2 += s2[j];
    }
    return result1 - result2;
}
