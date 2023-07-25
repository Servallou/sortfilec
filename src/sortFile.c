/*
** EPITECH PROJECT, 2023
** sortFile
** File description:
** sortFile
*/

#include <stdio.h>
#include <stdlib.h>

static void swap(char *a, char *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}

static char *allocNewBuffer(char *buffer)
{
    int numberOfCharIn_buffer = 0;
    char *newBuffer = NULL;

    while (buffer[numberOfCharIn_buffer] != 0) {
        numberOfCharIn_buffer += 1;
    }
    newBuffer = (char*)malloc(sizeof(char) * numberOfCharIn_buffer);
    return newBuffer;
}



extern short sortFile(char *buffer)
{
    char *newBuffer = allocNewBuffer(buffer);

    for (int i = 0; buffer[i] != 0; i += 1) {
        if (buffer[i + 1] == '\0')
            break;
        if (buffer[i] < buffer[i + 1]) {
            continue;
        } else {
            
        }
    }
    return 0;
}
