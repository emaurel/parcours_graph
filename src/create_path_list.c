/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** create_seen_list.c
*/

#include "solver.h"

path_list *create_path_list(maze *lab)
{
    path_list *res = malloc(sizeof(path_list));
    res->len = count_char_occurence_in_tab(lab->map, '*');
    res->ind = 0;
    res->list = malloc(sizeof(path *) * (res->len + 1));
    for (int i = 0; i <= res->len; i++)
        res->list[i] = NULL;
    return res;
}
