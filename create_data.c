#include <stdio.h>
#include <stdlib.h>
#include "/home/megh/Documents/GitHub/Wordle/funcs/funs_to_create_file.c"

int main()
{
    printf("This will create a general data to play games such as statistical report like which characters are most used etc");
    printf("\nAnd it will create words file based on its size");
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
    FILE *file = fopen("data/words_original.txt", "r");
    if (file == NULL)
    {
        printf("Error opening the file\nMake sure that file is saved within the same directory\nAnd named words.txt\n");
        return 1;
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
    //It will remove files which has 0 data
    for (int i = 5; i < 100; i++)
    {
        if (length_of_file[i-5] <= 0)
        {
            path(i, name);
            remove(name);
        }
    }
    return 0;
}
