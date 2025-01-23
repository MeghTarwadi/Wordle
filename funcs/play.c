#include <stdio.h>
#include <stdlib.h>
#include "../include/play.h"
#include "../include/funcs_for_str_manipulation.h"
#include "../include/func_for_linked_list.h"

void play(FILE *words, int size, int str_len);

void play(FILE *words, int size, int str_len)
{

    char rand_word[str_len];
    char guess[str_len];
    random_word(size, rand_word, words, str_len);
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
    ptr = NULL;
    ptr = head;
    // char fixed[str_len], contains[str_len], doesnt_contain[str_len];
    // // initialise with whitespaces
    // str_to_spaces(doesnt_contain, str_len);
    // str_to_spaces(contains, str_len);
    // str_to_spaces(fixed, str_len);

    char *doesnt_contain = "bcd   ";
    char *fixed = "a p   ";
    char *contains = "   e  ";

    // remove_which_are_not_fixed(ptr, fixed);
    remove_unecessary(ptr, doesnt_contain, contains, fixed);

    // Display all words
    // while (ptr->next != NULL)
    // {
    //     printf("%s\n", ptr->word);
    //     ptr = ptr->next;
    // }

    // Looping till we get answer
    // while (are_same(rand_word,guess)!=1)
    // {
    // }
}