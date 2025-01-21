#include <stdio.h>
#include <stdlib.h>

void path(int num, char *name)
{
    name[0] = 'd';
    name[1] = 'a';
    name[2] = 't';
    name[3] = 'a';
    name[4] = '/';
    name[5] = '0';
    name[6] = (char)(num / 100 % 10 + 48);
    name[7] = (char)(num / 10 % 10 + 48);
    name[8] = (char)(num % 10 + 48);
    name[9] = '.';
    name[10] = 't';
    name[11] = 'x';
    name[12] = 't';
    name[13] = '\0';
}

void outputfiles(FILE *file[95])
{
    char *name = (char *)malloc(14 * sizeof(char));

    for (int i = 5; i < 100; i++)
    {
        path(i, name);
        file[i] = fopen(name, "w");
    }
}

int length(char *word)
{
    int length_of_word = 0;
    for (length_of_word; word[length_of_word] != '\0'; length_of_word++)
        continue;
    return length_of_word;
}