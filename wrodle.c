#include <stdio.h>
#include <stdlib.h>

#include "funcs/func_for_returns_funcs.c"
#include "funcs/funcs_for_str_manipulation.c"
#include "funcs/funcs_for_files.c"
#include "funcs/play.c"

void main()
{
    int mode = 1;
    // int mode = 0;
    printf("Enter 1 to play 2 to create file: ");
    // scanf("%d", &mode);
    printf("\n");
    if (mode == 1)
    {
        printf("How many characters do you want in words : ");
        mode = 6;
        printf("\n");
        // scanf("%d", &mode);
        int size = validate(mode);
        if (size > 0)
        {
            char *words_path = (char *)malloc(14 * sizeof(char));
            path_of_file(mode, words_path);
            FILE *word_file;
            word_file = fopen(words_path, "r");
            play(word_file, size,mode);
            fclose(word_file);
        }
        else
        {
            printf("Word with the length of %d doesnt exist.\n", mode);
        }
    }
    else
    {
        FILE *file = fopen("data/words_original.txt", "r");
        // Create a new dataset
        create_wordle_files(file);
        printf("Words splitted sucessfuly\n");
    }
}
