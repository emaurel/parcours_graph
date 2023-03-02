/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** is_path_in_list.c
*/

#include "solver.h"

bool is_path_in_list(path_list *list, path *room)
{
    for (int i = 0; i < list->len; i++) {
        if (list->list[i] != NULL && list->list[i]->x == room->x &&
            list->list[i]->y == room->y) {
                return true;
        }
    }
    return false;
}
