/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** task03
*/
char *my_strncat(char *dest, char const *scr, int nb)
{
    int i_dest = 0;
    int i_scr = 0;

    if (!dest || !scr || nb < 0)
        return "wrong input";
    while (scr[i_scr] != '\0' && i_scr < nb){
        if (dest[i_dest] != '\0'){
            i_dest++;
        } else {
            dest[i_dest] = scr[i_scr];
            i_dest++;
            i_scr++;
        }
    }
    return dest;
}
