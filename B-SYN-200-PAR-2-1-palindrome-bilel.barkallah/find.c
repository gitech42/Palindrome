/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** find
*/

#include "palindrome.h"

int find_n(int ac, char **av, palindrome_t *pal)
{
    for (int i = 0; av[i] != NULL; i++) {
        if ((strncmp(av[i], "-n", 2)) == 0) {
            pal->n = atoi(av[i + 1]);
            return (pal->n);
        } else
            pal->n = 0;
    }
    return (pal->n);
}

int find_p(int ac, char **av, palindrome_t *pal)
{
    for (int i = 0; av[i] != NULL; i++) {
        if ((strncmp(av[i], "-p", 2)) == 0) {
            pal->p = atoi(av[i + 1]);
            return (pal->p);
        }
        else
            pal->p = 0;
    }
    return (pal->p);
}

int find_b(int ac, char **av, palindrome_t *pal)
{
    for (int i = 0; av[i] != NULL; i++) {
        if ((strncmp(av[i], "-b", 2)) == 0) {
            pal->b = atoi(av[i + 1]);
            if (pal->b < 2 || pal->b > 10)
                exit(84);
            return (pal->b);
        }
        else
            pal->b = 10;
    }
    return (pal->b);
}

palindrome_t *find_arg(int ac, char **av, palindrome_t *pal)
{
    pal->n = find_n(ac, av, pal);
    pal->p = find_p(ac, av, pal);
    pal->b = find_b(ac, av, pal);
    pal->imin = find_imin(ac, av, pal);
    pal->imax = find_imax(ac, av, pal);
    return (pal);
}
