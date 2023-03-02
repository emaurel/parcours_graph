/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** show_maze.c
*/

#include "solver.h"

void show_maze(maze *lab)
{
    for (int y = 0; y < lab->height; y++) {
        printf("%s\n", lab->map[y]);
    }
}
