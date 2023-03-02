/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-allan.leherpeux
** File description:
** create_maze.c
*/

#include "solver.h"

char *get_map(char *filename)
{
    int fd = open(filename, O_RDONLY);
    struct stat st;
    char *res;
    stat(filename, &st);
    res = malloc(sizeof(char) * (st.st_size + 1));
    read(fd, res, st.st_size);
    res[st.st_size] = 0;
    close(fd);
    return res;
}

int get_height(char *map)
{
    int res = 0;
    for (int i = 0; map[i]; i++) {
        res += (map[i] == '\n');
    }
    return res + 1;
}

int get_width(char *map)
{
    int i = 0;
    while (map[i] != '\n')
        i++;
    return i;
}

char **get_maze_from_map(char *map, int width, int height)
{
    char **res = malloc(sizeof(char *) * (height + 1));
    for (int y = 0; y < height; y++) {
        res[y] = malloc(sizeof(char) * (width + 1));
        for (int x = 0; x < width; x++) {
            res[y][x] = map[y * (width + 1) + x];
        }
        res[y][width] = 0;
    }
    res[height + 1] = NULL;
    return res;
}

maze *create_maze(char *filename)
{
    char *map = get_map(filename);
    maze *res = malloc(sizeof(maze));
    res->height = get_height(map);
    res->width = get_width(map);
    res->map = get_maze_from_map(map, res->width, res->height);
    free(map);
    return res;
}
