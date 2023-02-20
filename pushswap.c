/*
** EPITECH PROJECT, 2023
** B-CPE-110-NAN-1-1-pushswap-thomas.cluseau
** File description:
** pushswap
*/
#include "include/struct.h"
#include "include/my.h"

void find_min_value(struct_t *st)
{
    st->min_value = st->list_a[0];
    st->min_value_pos = 0;
    for (int i = 0; i < st->size_a; i++) {
        if (st->list_a[i] < st->min_value) {
            st->min_value = st->list_a[i];
            st->min_value_pos = i;
        }
    }
}

void place_min_value(struct_t *st)
{
    int mid = st->size_a / 2;

    if (st->min_value_pos == 1) {
        swap_elem(st->list_a, 'a');
        st->min_value_pos = 0;
        return;
    }
    if (st->min_value_pos > mid) {
        while (st->list_a[0] != st->min_value) {
            rr_elem(st->list_a, st->size_a, 'a');
        }
    } else {
        while (st->list_a[0] != st->min_value) {
            r_elem(st->list_a, st->size_a, 'a');
        }
    }
    st->min_value_pos = 0;
}

void last_part(struct_t *st)
{
    for (int i = 0; i < st->size_b; i ++) {
        st->size_a++;
        rr_elem(st->list_a, st->size_a, 0);
        st->list_a[0] = st->list_b[0];
        if (i == st->size_b - 1) {
            my_putstr("pa\n");
            reset_list(st);
            return;
        }
        my_putstr("pa ");
        r_elem(st->list_b, st->size_b, 0);
    }
}

void pushswap(struct_t *st)
{

    for (int i = 0; i < st->size_b; i++) {
        find_min_value(st);
        while (st->min_value_pos != 0)
            place_min_value(st);
        push_elem(st->list_a, st->list_b, st->size_b, 'b');
        r_elem(st->list_a, st->size_a, 0);
        st->size_a--;
    }
    last_part(st);
}
