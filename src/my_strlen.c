/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** my_strlen.c
*/

#include "solver.h"

int my_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
