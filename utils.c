/*
** EPITECH PROJECT, 2022
** B-CPE-110-NAN-1-1-pushswap-thomas.cluseau
** File description:
** reset_l_b
*/
#include "include/struct.h"
#include "include/my.h"

void swap_elem(int *array, char set)
{
    int tmp;

    tmp = array[0];
    array[0] = array[1];
    array[1] = tmp;
    if (set == 'a')
        my_putstr("sa ");
    if (set == 'b')
        my_putstr("sb ");
}

void r_elem(int *array, int size, char set)
{
    int tmp = array[0];

    for (int i = 0; i < size; i++)
        array[i] = array[i + 1];
    array[size - 1] = tmp;
    if (set == 'a')
        my_putstr("ra ");
    if (set == 'b')
        my_putstr("rb ");
}

void rr_elem(int *array, int size, char set)
{
    int tmp = array[size - 1];

    for (int i = size; i >= 0; i--)
        array[i] = array[i - 1];
    array[0] = tmp;
    if (set == 'a')
        my_putstr("rra ");
    if (set == 'b')
        my_putstr("rrb ");
}

int *push_elem(int *src, int *dest, int size, char set)
{
    if (dest[0] != 0)
        rr_elem(dest, size, 0);
    dest[0] = src[0];
    if (set == 'a')
        my_putstr("pa ");
    if (set == 'b')
        my_putstr("pb ");
    return dest;
}

void reset_list(struct_t *st)
{
    for (int j = 0; j < st->size_b; j++) {
        st->list_b[j] = st->list_b[j - 1];
    }
}
