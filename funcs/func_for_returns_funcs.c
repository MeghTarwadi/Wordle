#include <stdio.h>
#include <stdlib.h>

int length(char *word);
int strToInt(int length, char num[length]);
int validate(int number);
int are_same(char *str1, char *str2);
int has_char(char *word, char letter, int index);
int is_it_a_word(char *word, FILE *file, int size);

int is_it_a_word(char *word, FILE *file, int size)
{
    char buff[size];
    rewind(file);
    while (fscanf(file, "%s", buff) == 1)
    {
        if (are_same(buff, word) == 1)
        {
            rewind(file);
            return 1;
        }
    }
    rewind(file);
    return 0;
}
int length(char *word)
{
    int length_of_word = 0;
    for (length_of_word; word[length_of_word] != '\0'; length_of_word++)
        continue;
    return length_of_word;
}

int has_char(char *word, char letter, int index)
{
    if (word[index] == letter)
    {
        return 0;
    }
    for (int i = 0; i < length(word); i++)
    {
        if (word[i] == letter)
        {
            return 1;
        }
    }
    return 0;
}

int strToInt(int length, char num[length])
{
    int number = 0;
    for (int i = 0; i < length; i++)
    {
        if ((int)num[i] - 48 > 9 || (int)num[i] - 48 < 0)
        {
            return number;
        }
        number = number * 10 + (((int)num[i]) - 48);
    }
    return number;
}

int validate(int number)
{
    FILE *nums_of_letter;
    char num[4];
    char num2[11];
    nums_of_letter = fopen("game_data/nums_of_letter.txt", "r");
    rewind(nums_of_letter);
    while (fscanf(nums_of_letter, "%s %s", num, num2) == 2)
    {
        if (strToInt(3, num) == number)
        {
            rewind(nums_of_letter);
            return strToInt(8, num2);
        }
    }
    rewind(nums_of_letter);
    return -1;
}

int are_same(char *str1, char *str2)
{
    for (int i = 0; i < length(str1); i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }
    return 1;
}