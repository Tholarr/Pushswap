/*
** EPITECH PROJECT, 2022
** B-CPE-110-NAN-1-1-pushswap-thomas.cluseau
** File description:
** main
*/
#include <stdlib.h>
#include "include/struct.h"
#include "include/my.h"

int init_list(int ac, char **av, struct_t *st)
{
    st->size_a = ac - 1;
    st->size_b = st->size_a - 1;
    st->list_a = malloc(sizeof(int) * st->size_a);
    st->list_b = malloc(sizeof(int) * st->size_b);
    for (int j = 0; j < st->size_a; j++)
        st->list_a[j] = transform(av[j + 1]);
    for (int j = 0; j < st->size_b; j++)
        st->list_b[j] = 0;
    return 0;
}

int verif_list(int ac, struct_t *st)
{
    int tmp;
    int cmp = 0;

    for (int j = 0; j < st->size_b; j++) {
        if (st->list_a[j] > st->list_a[j + 1])
            cmp++;
    }
    if (cmp == 0) {
        my_putchar('\n');
        return 1;
    }
    if (ac == 3 && st->list_a[0] > st->list_a[1]) {
        tmp = st->list_a[0];
        st->list_a[0] = st->list_a[1];
        st->list_a[1] = tmp;
        my_putstr("sa\n");
        return 1;
    }
    return 0;
}

int main(int ac, char **av)
{
    struct_t st;

    if (ac == 1)
        return 84;
    if (ac == 2) {
        my_putchar('\n');
        return 0;
    }
    init_list(ac, av, &st);
    if (verif_list(ac, &st) == 0)
        pushswap(&st);
    return 0;
}
