/*
** EPITECH PROJECT, 2024
** my_compute_power_rec
** File description:
** my_lib
*/
int my_compute_power_rec(int nb, int p)
{
    long nb_f = nb;

    if (p < 0){
        return (0);
    }
    if (p == 0){
        return (1);
    }
    if (p == 1){
        return (nb);
    }
    nb_f *= my_compute_power_rec(nb, p - 1);
    if (nb_f > 2147483647){
        return (0);
    } else {
        return ((int) nb_f);
    }
}
