#include "ft_stock_str.h"
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(*str++)
        i++;
    return i;
}

void ft_strcopy(char *dest, char *str)
{
    while(*str)
        *dest++ = *str++;
    *dest = '\0';
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *table_str = malloc(sizeof(t_stock_str) * (ac + 1));
    if (table_str == NULL)
        return NULL;

    int lvl = 0;
    while(lvl < ac)
    {
        table_str[lvl].size = ft_strlen(av[lvl]);

        table_str[lvl].str = malloc(table_str[lvl].size + 1);
        table_str[lvl].copy = malloc(table_str[lvl].size + 1);

        if (!table_str[lvl].str || !table_str[lvl].copy)
        {
            int i = 0;
            while (i < lvl)
            {
                free(table_str[i].str);
                free(table_str[i].copy);
                i++;
            }
            free(table_str);
            return NULL;
        }

        ft_strcopy(table_str[lvl].str, av[lvl]);
        ft_strcopy(table_str[lvl].copy, av[lvl]);
        
        lvl++;
    }
    table_str[ac].str = NULL;
    table_str[ac].copy = NULL;
    table_str[ac].size = 0;
}