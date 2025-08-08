#!/bin/sh

# Nombre de la libreria
LIB_NAME=libft.a

# Lista de archivos fuente
SRC="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"

# Reemplaza todas las ocurrencias de .c por .o
OBJ=${SRC//.c/.o}

# Compilar archivos fuente a objetos con warnings y optimizaciones mínimas
gcc -Wall -Wextra -Werror -c $SRC

# Crear biblioteca estática a partir de los objetos
ar rcs $LIB_NAME $OBJ

echo "Biblioteca $LIB_NAME creada con éxito."