#ifndef FUNCS_FOR_STR_MANIPULATION_H
#define FUNCS_FOR_STR_MANIPULATION_H

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void str_to_spaces(char *name, int length);
void intToStr(int num, char *name, int start, int end);
void path_of_file(int num, char *name);
void random_word(int size, char *name, FILE *file, int str_len);
void copy_string(char *src, char *dest);

#endif // FUNCS_FOR_STR_MANIPULATION_H
