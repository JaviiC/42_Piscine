#include "../ex04/ft_stock_str.h"
#include <stdio.h>

void ft_show_tab(struct s_stock_str *par);

int ft_strlen_matrix(char **matrix)
{
    int count = 0;
    if (!matrix)
        return 0;
    while (matrix[count] != NULL)
        count++;
    return count;
}

int main(void)
{
    char *words[] = {
        "Hola!",
        "Mundo",
        "Desde",
        "C",
        "Con",
        "Estilo",
        NULL
    };

    int amount = ft_strlen_matrix(words);

    printf("Llamando a [ft_strs_to_tab] con [%d] palabras...\n\n", amount);

    t_stock_str *ptr= ft_strs_to_tab(amount, words);

    ft_show_tab(ptr);
}