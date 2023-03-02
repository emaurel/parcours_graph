/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** count_char_occurence_in_tab.c
*/

#include "solver.h"

int count_char_occurence_in_tab(char **tab, char c)
{
    int res = 0;
    for (int y = 0; tab[y] != NULL; y++) {
        for (int x = 0; tab[y][x]; x++) {
            res += (tab[y][x] == c);
        }
    }
    return res;
}
