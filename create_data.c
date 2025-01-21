#include <stdio.h>
#include <stdlib.h>
#include "/home/megh/Documents/GitHub/Wordle/funcs/funs_to_create_file.c"

int main()
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

    while (fscanf(file, "%s", buff) == 1)
    {
        int current_length = length(buff);
        if (current_length >= length_of_word)
        {
            length_of_file[current_length - 5]++;
            // fprintf(output_file[current_length - 5], buff);
        }
    }
    for (int i = 0; i < 95; i++)
    {
        printf("%d %d\n", i + 5, length_of_file[i]);
    }
    return 0;
}
