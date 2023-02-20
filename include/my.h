/*
** EPITECH PROJECT, 2022
** B-CPE-110-NAN-1-1-pushswap-thomas.cluseau
** File description:
** my
*/
#include "struct.h"

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int transform(char *str);

void pushswap(struct_t *st);

void swap_elem(int *array, char set);
void r_elem(int *array, int size, char set);
void rr_elem(int *array, int size, char set);
int *push_elem(int *src, int *dest, int size, char set);
void reset_list(struct_t *st);

#endif /* !MY_H_ */
