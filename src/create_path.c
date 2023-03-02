/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** init_path.c
*/

#include "solver.h"

path *create_path(int x, int y, maze *lab, path *father)
{
    path end;
    end.x = lab->width - 1;
    end.y = lab->height - 1;
    path *res = malloc(sizeof(path));
    res->x = x;
    res->y = y;
    if (lab->map[y][x] == 'X') {
        free(res);
        return NULL;
    }
    res->neighbours = malloc(sizeof(path *) * 4);
    for (int i = 0; i < 4; i++)
        res->neighbours[i] = NULL;
    res->parcoured = false;
    res->father = father;
    return res;
}
