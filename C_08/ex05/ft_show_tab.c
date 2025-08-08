#include "../ex04/ft_stock_str.h"
#include <stdio.h>

void ft_putstr(char *str)
{
    while(*str)
        putchar(*str++);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    while((*par).str != NULL)
    {
        printf(" === STRUCTURE %d:\n", i++);
        printf("SIZE: %d\n", par->size);
        printf("STR: %s\n", par->str);
        printf("COPY: %s\n", par->copy);
        *par++;
    }
}