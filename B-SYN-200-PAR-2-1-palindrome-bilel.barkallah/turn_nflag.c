/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** t
*/

#include "palindrome.h"

void print_nflag(int nb, palindrome_t *pal, int i)
{
    my_put_nbr(pal->n);
    my_putstr(" leads to ");
    my_putstr((pass_base_to(nb, 10)));
    my_putstr(" in ");
    my_putstr((pass_base_to(i, 10)));
    my_putstr(" iteration(s) in base ");
    my_putstr((pass_base_to(pal->b, 10)));
    my_putchar('\n');
}

int integer_base(int nb, palindrome_t *pal, int i)
{
    char *str = pass_base_to(nb, pal->b);
    char *temp = strdup(str);

    temp = my_revstr(temp);
    while ((strcmp(str, temp)) != 0) {
        nb = (pass_base_int(str, pal->b) +
              pass_base_int(temp, pal->b));
        str = pass_base_to(nb, pal->b);
        temp = strdup(str);
        temp = my_revstr(temp);
        i++;
        if (i > pal->imax)
            return (i);
    }
    pal->nb = nb;
    return (i);
}

palindrome_t *nflag(int nb, palindrome_t *pal)
{
    int i = 0;
    char *str = pass_base_to(nb, pal->b);

    i = integer_base(nb, pal, i);
    while (i < pal->imin) {
        str = pass_base_to(pal->nb, pal->b);
        nb = pass_base_int(str, pal->b) +
            pass_base_int(str, pal->b);
        i+=1;
        i = integer_base(nb, pal, i);
    }
    print_nflag(pal->nb, pal, i);
}

int error_case(int ac, char **av)
{
    int err = 0;

    if (ac < 3)
        return (84);
    if ((check_error(ac, av)) == -1) {
        write(2, "invalid argument\n", 17);
        return (84);
    }
    if ((strcmp(av[1], "-n")) == 0 || (strcmp(av[1], "-p")) == 0)
        err++;
    if (ac >= 4)
        if ((strcmp(av[3], "-n")) == 0 || (strcmp(av[3], "-p")) == 0)
            err++;
    if (err == 2)
        return (84);
}

int main(int ac, char **av)
{
    palindrome_t *pal = malloc(sizeof(palindrome_t));
    int check = 0;

    if ((error_case(ac, av)) == 84)
        return (84);
    if ((strcmp(av[1], "-n")) == 0) {
        pal = find_arg(ac, av, pal);
        pal = nflag(pal->n, pal);
    }
    else if ((strcmp(av[1], "-p")) == 0) {
        pal = find_arg(ac, av, pal);
        palindrome_basic(pal);
    }
    else
        return (84);
}
