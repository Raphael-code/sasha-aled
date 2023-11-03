/*
** EPITECH PROJECT, 2023
** my_compute_square_root.c
** File description:
** Functions that returns the sqrt
*/

int my_compute_square_root(int nb)
{
    int counter = 1;
    int result = 0;
    int sqrt = 0;

    if (nb == 0) {
        return 0;
    }
    while (counter <= nb) {
        result = counter * counter;
        if (result == nb) {
            sqrt = counter;
            return sqrt;
        }
        if (result > nb) {
            return 0;
        }
        counter++;
    }
    return sqrt;
}
