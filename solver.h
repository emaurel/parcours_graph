/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** header
*/

#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <math.h>

typedef struct {
    int width;
    int height;
    char **map;
    bool is_perfect;
} maze;

typedef struct path_s {
    int x;
    int y;
    bool parcoured;
    struct path_s *father;
    struct path_s **neighbours;
} path;

typedef struct {
    int ind;
    int len;
    path **list;
} path_list;

int my_strlen(char *str);
maze *create_maze(char *filename);
void show_maze(maze *lab);
path *create_path(int x, int y, maze *lab, path *father);
void add_neighbours(maze *lab, path *actual);
int count_char_occurence_in_tab(char **tab, char c);
path_list *create_path_list(maze *lab);
bool is_path_in_list(path_list *list, path *room);
bool is_it_a_wall(path *room, maze *lab);
void show_path(maze *lab, path_list *seen);


void algorithm_one(maze *lab);
