/*
** EPITECH PROJECT, 2023
** sortFile
** File description:
** sortFile
*/

#include <stdio.h>
#include <stdlib.h>

// static void swap(char *a, char *b)
// {
//     int c = *a;

//     *a = *b;
//     *b = c;
// }

static char *allocNewBuffer(char *buffer)
{
    int numberOfCharIn_buffer = 0;
    char *newBuffer = NULL;
    int i = 0;

    while (buffer[numberOfCharIn_buffer] != 0) {
        numberOfCharIn_buffer += 1;
    }
    newBuffer = (char*)malloc(sizeof(char) * numberOfCharIn_buffer);
    while (buffer[i]) {
        newBuffer[i] = buffer[i];
        i += 1;
    }
    newBuffer[i + 1] = '\0';
    return newBuffer;
}

extern short sortFile(char *buffer)
{
    char *newBuffer = allocNewBuffer(buffer);
    int count = 0;
    char store = 0;

    while (count == 0) {
        printf("while is active\n");
        for (int i = 0; newBuffer[i] != '\0'; i += 2) {
            printf("for is active\n");
            if (newBuffer[i + 1] == '\0')
                break;
            else if (newBuffer[i] > newBuffer[i + 1]) {
                store = newBuffer[i];
                newBuffer[i] = newBuffer[i + 1];
                newBuffer[i + 1] = store;
                count = 0;
            } else {
                count = 1;
            }
        }
    }
    printf("%s\n", newBuffer);
    free(newBuffer);
    return 0;
}
