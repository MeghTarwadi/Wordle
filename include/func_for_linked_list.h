#ifndef FUNC_FOR_LINKED_LIST_H
#define FUNC_FOR_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include "play.h" // Include the header for Node definition

// Function prototypes
void remove_which_are_not_fixed(Node *node, char *list);
void keep_which_contains(Node *node, char *list);
void remove_words_which_arent_in_word(Node *node, char *list);
void remove_unecessary(Node *head, char *doesnt_contain, char *contains, char *fixed);

#endif // FUNC_FOR_LINKED_LIST_H