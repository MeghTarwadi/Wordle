#ifndef PLAY_H
#define PLAY_H

#include <stdio.h>
#include <stdlib.h>
#include "funcs_for_str_manipulation.h"
#include "func_for_linked_list.h"

// Function prototype for play

void ask(FILE *words, int size, int str_len, char *correct);
void play_self(char *word, int str_len);

#endif // PLAY_H
