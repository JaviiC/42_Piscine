#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
    int size; // size of character string
    char *str; // character string
    char *copy; // copy of character string
} t_stock_str;

#endif