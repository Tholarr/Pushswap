/*
** EPITECH PROJECT, 2022
** B-CPE-110-NAN-1-1-pushswap-thomas.cluseau
** File description:
** lib
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr (char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i ++;
    }

}

int transform(char *str)
{
    long nb = 0;
    int is_neg = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-')
            is_neg = 1;
        if (str[i] >= '0' && str[i] <= '9') {
            nb *= 10;
            nb += str[i] - 48;
        } else
            return 84;
    }
    if (nb < -2147483648 || nb > 2147483647)
        return (0);
    if (is_neg == 1)
        return (-nb);
    return nb;
}
