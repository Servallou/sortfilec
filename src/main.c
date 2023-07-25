/*
** EPITECH PROJECT, 2022
** Main
** File description:
**
*/

#include "openFile.h"

static void help(void)
{
    printf("USAGE:\n\t"
        "./sortFile [filepath]\n"
        "DESCRIPTION:\n\t"
        "Trie les caractères d'un fichier dans l'ordre alphabétique.\n");
}

static short myStrcmp(char *s1, char *s2)
{
    for (int i = 0; s1[i]; i += 1) {
        if (s1[i] != s2[i]) {
            return 13;
        }
    }
    return 0;
}

static void swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}

static void bubbleSort(int *a, int *b)
{
    if (*a < *b || *a == *b) {
        return;
    } else {
        swap(a, b);
    }
}

int main(int ac, char **av)
{
    char *buffer = NULL;
    char *filepath = NULL;

    if (ac == 2 && myStrcmp("-h", av[1]) == 0) {
        help();
        return 0;
    }
    if (ac < 2 || ac > 3) {
        return 13;
    }
    filepath = av[1];
    open_file(filepath, &buffer);
	return 0;
}
