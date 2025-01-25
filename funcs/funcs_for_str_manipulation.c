#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/func_for_returns_funcs.h"

void str_to_spaces(char *name, int length);
void intToStr(int num, char *name, int start, int end);
void path_of_file(int num, char *name);
void random_word(int size, char *name, FILE *file, int str_len);
void copy_string(char *src, char *dest);
void str_to_underscore(char *name, int length);
void verifyTheGuess(char *correct, char *selected, char *fixed, char *contains, char *doesnt_contain, char *player);

// here function does pretty much as what they named and directly store result by changing the string which is passed by address hence changes are permenent

void str_to_spaces(char *name, int length)
{
    for (int i = 0; i < length; i++)
    {
        name[i] = ' ';
    }
    name[length - 1] = '\0';
}

void str_to_underscore(char *name, int length)
{
    for (int i = 0; i < length; i++)
    {
        name[i] = '_';
    }
    name[length - 1] = '\0';
}

void intToStr(int num, char *name, int start, int end)
{
    for (int i = end; i >= start; i--)
    {
        name[i] = (char)(num % 10 + 48);
        num = num / 10;
    }
}

void path_of_file(int num, char *name)
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

void copy_string(char *src, char *dest)
{
    for (int i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
}

void random_word(int size, char *name, FILE *file, int str_len)
{
    rewind(file);
    srand(time(NULL));
    int n = rand() % size;
    int current_line = 0;
    char str[str_len];
    while (fscanf(file, "%s", str) == 1 && current_line != n)
    {
        current_line++;
    }
    for (int i = 0; i < str_len; i++)
    {
        name[i] = str[i];
    }
    rewind(file);
}

void verifyTheGuess(char *correct, char *selected, char *fixed, char *contains, char *doesnt_contain, char *player)
{
    for (int i = 0; i < length(selected); i++)
    {
        if (selected[i] != '\0' && correct[i] != '\0' && fixed[i] != '\0' && contains[i] != '\0' && doesnt_contain[i] != '\0')
        {
            printf("%s", player);
            if (correct[i] == selected[i])
            {
                fixed[i] = selected[i];
                printf(" %c is at the correct position.\n", selected[i]);
            }
            else if (has_char(correct, selected[i], i) == 1)
            {
                contains[i] = selected[i];
                printf(" %c is in the word.\n", selected[i]);
            }
            else
            {
                doesnt_contain[i] = selected[i];
                printf(" %c is not in the word.\n", selected[i]);
            }
        }
    }
}