/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** add_neighbours.c
*/

#include "solver.h"


void add_neighbours(maze *lab, path *actual)
{
    int x1 = actual->x - 1;
    int x2 = actual->x + 1;
    int y1 = actual->y - 1;
    int y2 = actual->y + 1;
    if (x1 >= 0)
        actual->neighbours[0] = create_path(x1, actual->y, lab, actual);
    if (y1 >= 0)
        actual->neighbours[1] = create_path(actual->x, y1, lab, actual);
    if (x2 < lab->width)
        actual->neighbours[2] = create_path(x2, actual->y, lab, actual);
    if (y2 < lab->height)
        actual->neighbours[3] = create_path(actual->x, y2, lab, actual);
}
