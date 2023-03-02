/*
** EPITECH PROJECT, 2022
** main
** File description:
** yes
*/
#include "solver.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 84;
    maze *lab = create_maze(argv[1]);
    algorithm_one(lab);
    return 0;
}
