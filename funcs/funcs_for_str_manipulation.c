#include <stdio.h>
#include <stdlib.h>

void str_to_spaces(char *name, int length);
void intToStr(int num, char *name, int start, int end);
void path_of_file(int num, char *name);

void str_to_spaces(char *name, int length)
{
    for (int i = 0; i < length; i++)
    {
        name[i] = ' ';
    }
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