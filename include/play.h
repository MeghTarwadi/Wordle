#ifndef PLAY_H
#define PLAY_H

#include <stdio.h>
#include <stdlib.h>
#include "funcs_for_str_manipulation.h"

// Function prototype for play
typedef struct node
{
    char *word;
    struct node *next;
} Node;
#include "func_for_linked_list.h"

void play(FILE *words, int size, int str_len);

#endif // PLAY_H
