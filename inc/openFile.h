/*
** EPITECH PROJECT, 2023
** sortFile
** File description:
** openFile
*/

#ifndef OPENFILE_H_
    #define OPENFILE_H_

    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>

int open_file(char *filepath, char **buffer);

#endif /* !OPENFILE_H_ */
