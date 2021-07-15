/*
** EPITECH PROJECT, 2021
** t
** File description:
** t
*/

#include "palindrome.h"

int check_num(int ac, char *av)
{
    for (int i = 0; av[i] != '\0'; i++)
        if (av[i] < '0' || av[i] > '9')
            return (-1);
    return (0);
}

int check_error_num(int ac, char **av)
{
    for (int i = 2; i < ac; i += 2)
        if ((check_num(ac, av[i])) == -1)
            return (-1);
    return (0);
}

int check_flag(int ac, char **av)
{
    if ((strcmp(av[1], "-n")) != 0 && (strcmp(av[1], "-p")) != 0)
        return (-1);
    return (0);
}

int invalid_argument(int ac, char **av)
{
    for (int i = 1; i < ac; i += 2) {
        if (av[i][0] != '-')
            return (-1);
        else if (av[i][1] != 'b' && av[i][1] != 'n' && av[i][1] != 'p' &&
                 (strcmp(av[i], "-imin")) != 0 && (strcmp(av[i], "-imax")) != 0)
            return (-1);
    }
}

int check_error(int ac, char **av)
{
    if ((check_error_num(ac, av)) == -1)
        return (-1);
    else if ((check_flag(ac, av)) == -1)
        return (-1);
    else if ((invalid_argument(ac, av)) == -1)
        return (-1);
    return (0);
}
