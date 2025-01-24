#include <stdio.h>
#include <stdlib.h>
#include "../include/play.h"
#include "../include/funcs_for_str_manipulation.h"
#include "../include/func_for_linked_list.h"

void ask(FILE *words, int size, int str_len, char *correct);
void play_self(char *word, int str_len);

void ask(FILE *words, int size, int str_len, char *correct)
{
    char guess[str_len];
    str_to_spaces(guess, str_len);

    Node *head = (Node *)malloc(sizeof(Node));
    // Created a reference
    Node *ptr = head;

    // Copy file words in linked list for memory efficiency
    char temp[str_len];

    while (fscanf(words, "%s", temp) == 1)
    {
        ptr->word = (char *)malloc(str_len * sizeof(char));
        copy_string(temp, ptr->word);
        ptr->next = (Node *)malloc(sizeof(Node));
        ptr = ptr->next;
    }
    rewind(words);
    ptr = head;
    char fixed[str_len], contains[str_len], doesnt_contain[str_len];
    // initialise with whitespaces
    str_to_spaces(doesnt_contain, str_len);
    str_to_underscore(contains, str_len);
    str_to_underscore(fixed, str_len);

    // Looping till we get answer
    int round = 0;
    while (are_same(correct, guess) != 1)
    {
        round++;
        printf("\n\n\n\nKone   : Round %d\n\n\n\n", round);
        remove_unecessary(ptr, doesnt_contain, contains, fixed, guess);
        verifyTheGuess(correct, guess, fixed, contains, doesnt_contain, "Kisuke :");
    }
    // Display all words
    // while (ptr->next != NULL)
    // {
    //     printf("%s\n", ptr->word);
    //     ptr = ptr->next;
    // }
}

void play_self(char *word, int str_len) {}