#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int length(char *word);
int strToInt(int length, char num[length]);
int validate(int number);
int are_same(char *str1, char *str2);
int has_char(char *word, char letter, int index);
int is_it_a_word(char *word, FILE *file,int size);

#endif // FUNCTIONS_H
