/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** show_path.c
*/

#include "solver.h"

void show_path(maze *lab, path_list *seen)
{
    path *actual = seen->list[seen->ind - 1];
    int i = 0;
    char **cpy = lab->map;
    while (actual != NULL) {
        cpy[actual->y][actual->x] = 'o';
        actual = actual->father;
        i++;
    }
    for (int i = 0; i < lab->height; i++) {
        for (int j = 0; cpy[i][j]; j++) {
            cpy[i][j] == 'o' ? printf("\033[0;31m") : 0;
            printf("%c", cpy[i][j]);
            printf("\033[0m");
        }
        printf("\n");
    }
    printf("\nnombre de salles parcouru : %i\nlongueur de la solution : %i\n",
    seen->ind - 1, i);
}
