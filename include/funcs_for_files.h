#ifndef FUNCS_FOR_FILES_H
#define FUNCS_FOR_FILES_H

#include <stdio.h>
#include <stdlib.h>
#include "funcs_for_str_manipulation.c"  // Include the relevant header for str_to_spaces, intToStr, path_of_file

// Function prototypes
void outputfiles(FILE *file[95]);
void create_wordle_files(FILE *file);

#endif // FUNCS_FOR_FILES_H
