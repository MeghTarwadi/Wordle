#include <stdio.h>
#include <stdlib.h>
#include "../include/funcs_for_str_manipulation.h"


void create_wordle_files(FILE *file);
void outputfiles(FILE *file[95]);
// void save_in_order(int list[((int)'z') - ((int)'a') + 1]);

void outputfiles(FILE *file[95])
{
    char *name = (char *)malloc(14 * sizeof(char));

    for (int i = 5; i < 100; i++)
    {
        path_of_file(i, name);
        file[i] = fopen(name, "w");
    }
}

void create_wordle_files(FILE *file)
{
    // array of pointer of type file
    FILE *output_file[95];
    int length_of_file[95];
    // initialize length by zero
    for (int i = 0; i < 95; i++)
    {
        length_of_file[i] = 0;
    }
    // create 5-100 files in data
    outputfiles(output_file);
    // Opened main file to split into categorized by length of words
    // FILE *file = fopen("data/words_original.txt", "r");
    if (file == NULL)
    {
        printf("Error opening the file\nMake sure that file is saved within the same directory\nAnd named words.txt\n");
    }
    char buff[100];
    // Minimum size of word's lentgh and this will be incremented to saperate files
    int length_of_word = 5;
    // To sort each word by length
    char *name = (char *)malloc(14 * sizeof(char));
    // scans every line on file and stores each line in buff
    while (fscanf(file, "%s", buff) == 1)
    {
        // length of line
        int current_length = length(buff);
        // if its above 5 than
        if (current_length >= length_of_word)
        {
            // It will increment count by 1 to record amount of lines which data got appended
            length_of_file[current_length - 5]++;
            // adding \n at the end to make file reusable if it readed by lines
            buff[current_length + 1] = buff[current_length];
            buff[current_length] = '\n';
            // adds data to file... append but in c
            fprintf(output_file[current_length], buff);
        }
    }
    // Free dynamically allocated memory
    free(name);

    // Close all opened files in the output_file array
    for (int i = 0; i < 95; i++)
    {
        if (output_file[i] != NULL)
        {
            fclose(output_file[i]);
        }
    }
    FILE *available;
    available = fopen("game_data/nums_of_letter.txt", "w");
    for (int i = 5; i < 100; i++)
    {
        if (length_of_file[i - 5] <= 0)
        {
            path_of_file(i, name);
            remove(name);
        }
        else
        {
            char *temp = (char *)malloc(15 * sizeof(char));
            str_to_spaces(temp, 15);
            intToStr(i, temp, 0, 2);
            intToStr(length_of_file[i - 5], temp, 5, 12);
            temp[13] = '\n';
            temp[14] = '\0';
            fprintf(available, temp);
            free(temp);
        }
    }
    fclose(available);
}

// void save_in_order(int list[((int)'z') - ((int)'a') + 1])
// {
//     FILE *file = fopen("game_data/overall.txt", "w");
//     char characters[((int)'z') - ((int)'a') + 1];
//     for (int i = 0; i < ((int)'z') - ((int)'a') + 1; i++)
//     {
//         characters[i] = (char)((int)'a' + i);
//     }
//     // sort abcd based on how many times they have been repeated
//     for (int i = 0; i < ((int)'z') - ((int)'a') + 1; i++)
//     {
//         int max = i;
//         for (int j = i; j < ((int)'z') - ((int)'a') + 1; j++)
//         {
//             if (list[j] > list[max])
//             {
//                 max = j;
//             }
//         }
//         int tempI = list[max];
//         char tempC = characters[max];
//         list[max] = list[i];
//         characters[max] = characters[i];
//         list[i] = tempI;
//         characters[i] = tempC;
//     }

//     for (int i = 0; i < ((int)'z') - ((int)'a') + 1; i++)
//     {
//         char freeChar[20] = {"                   \n"};
//         freeChar[0] = characters[i];
//         for (int j = 18; j > 4; j--)
//         {
//             if (list[i] > 0)
//             {
//                 freeChar[j] = (char)(list[i] % 10 + 48);
//                 list[i] = (int)(list[i] / 10);
//             }
//         }
//         fprintf(file, freeChar);
//     }
// }