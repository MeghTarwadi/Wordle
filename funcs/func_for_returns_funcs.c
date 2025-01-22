#include <stdio.h>
#include <stdlib.h>

// int length(char *word);
// int strToInt(int length, char num[length]);
// int validate(int number);
// int are_same(char *str1, char *str2);

int length(char *word)
{
    int length_of_word = 0;
    for (length_of_word; word[length_of_word] != '\0'; length_of_word++)
        continue;
    return length_of_word;
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
    while (fscanf(nums_of_letter, "%s %s", num, num2) == 2)
    {
        if (strToInt(3, num) == number)
        {
            return strToInt(8, num2);
        }
    }
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