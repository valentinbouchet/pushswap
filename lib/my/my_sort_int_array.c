/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** lib_my
*/

void my_sort_int_array(int *array, int size)
{
    int tri = 0;
    int stockage;

    while (tri != size) {
        if (array[tri] > array[tri + 1]) {
            stockage = array[tri + 1];
            array[tri + 1] = array[tri];
            array[tri] = stockage;
            tri = 0;
        } else
            tri++;
    }
}
