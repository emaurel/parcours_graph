/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** is_it_a_wall.c
*/

#include "solver.h"

bool is_it_a_wall(path *room, maze *lab)
{
    return (lab->map[room->y][room->x] == 'X');
}
