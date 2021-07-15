/*
** EPITECH PROJECT, 2021
** p
** File description:
** p
*/

#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct palindrome_s
{
    int n;
    int p;
    int b;
    int imin;
    int imax;
    int solution;
    int nb;
} palindrome_t;

char *my_revstr(char *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int check_error(int ac, char **av);
int pass_base_int(char *str, int base);
char *pass_base_to(int nbr, int base);
palindrome_t *find_arg(int ac, char **av, palindrome_t *pal);
palindrome_t *integer_pal(int nb, palindrome_t *pal);
void palindrome_basic(palindrome_t *pal);
int find_imin(int ac, char **av, palindrome_t *pal);
int find_imax(int ac, char **av, palindrome_t *pal);
