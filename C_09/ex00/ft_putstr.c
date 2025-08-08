#include <stdio.h>

void ft_putstr(char *str)
{
    while (*str)
        putchar(*str++);
}