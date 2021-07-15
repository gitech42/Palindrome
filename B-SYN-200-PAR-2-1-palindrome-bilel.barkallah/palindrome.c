/*
** EPITECH PROJECT, 2021
** syn
** File description:
** pal
*/

#include "palindrome.h"

void print_pal(int nb, palindrome_t *pal, int i)
{
    my_put_nbr(pal->n + 1);
    my_putstr(" leads to ");
    my_put_nbr(nb);
    my_putstr(" in ");
    my_putstr((pass_base_to(i, 10)));
    my_putstr(" iteration(s) in base ");
    my_putstr((pass_base_to(pal->b, 10)));
    my_putchar('\n');
}

palindrome_t *integer_pal(int nb, palindrome_t *pal)
{
    char *str = pass_base_to(nb, pal->b);
    char *temp = strdup(str);
    int i = 0;

    temp = my_revstr(temp);
    while ((strcmp(str, (pass_base_to(pal->p, pal->b))) != 0) &&
           i < pal->imax) {
        nb = (pass_base_int(str, pal->b) +
              pass_base_int(temp, pal->b));
        str = pass_base_to(nb, pal->b);
        temp = strdup(str);
        temp = my_revstr(temp);
        i++;
    }
    if ((strcmp(str, (pass_base_to(pal->p, pal->b))) == 0) && i >= pal->imin) {
        print_pal(nb, pal, i);
        pal->solution = 1;
    }
    return (pal);
}

void palindrome_basic(palindrome_t *pal)
{
    for (int i = 0; i < pal->p; i++) {
        pal->n = i;
        pal = integer_pal((i+ 1), pal);
    }
    if (pal->solution == 0)
        my_putstr("no solution\n");
}
