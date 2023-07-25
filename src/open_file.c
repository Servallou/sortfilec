/*
** EPITECH PROJECT, 2022
** lib
** File description:
** open_file
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int open_file(char *filepath, char **buffer)
{
    struct stat sb;
    int fd = 0;

    stat(filepath, &sb);
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return 84;
    *buffer = malloc(sizeof(char) * sb.st_size - 1);
    read(fd, *buffer, sb.st_size);
    close(fd);
    return 0;
}