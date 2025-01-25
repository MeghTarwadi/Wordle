#include <stdio.h>
#include <stdlib.h>
#include "../include/play.h"
#include "../include/funcs_for_str_manipulation.h"
#include "../include/func_for_linked_list.h"

void ask(FILE *words, int size, int str_len, char *correct);
void play_self(FILE *words, char *word, int str_len);

void ask(FILE *words, int size, int str_len, char *correct)
{
    // if you are dumb to guess and try to insult aizen than you can ask aizen to guess for you :P
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
        printf("\n\n\n\nKone   : Guess %d\n\n\n\n\n", round);
        remove_unecessary(ptr, doesnt_contain, contains, fixed, guess);
        printf("\n");
        verifyTheGuess(correct, guess, fixed, contains, doesnt_contain, "Kisuke :");
    }
}

void play_self(FILE *words, char *word, int str_len)
{
    // if you want aizen to choose word and guess your self what the choosen word is
    char guess[str_len + 1];
    int round = 0;
    char temp[str_len + 1];
    // it will repeat till you admit defeat or you win
    // since i am aizen i will choose a word and you will guess it
    while (are_same(guess, word) != 1)
    {
        // if you are dumb at guessing what aizen is thinking than dont worry because no one understand him...
        // jokes apart if you have played 5 round and still not guess the word than you can ask aizen to reveal the word
        if (round > 5)
        {
            char input[1];
            printf("\nAizen : Do you admit defeat?\n");
            printf("Kisuke : ");
            scanf("%s", input);
            if (input[0] == 'y' || input[0] == 'Y')
            {
                printf("Aizen : You lose !\n");
                printf("Aizen : The word that I was thinking of was %s !\n", word);
                printf("Aizen : You lost now get lost !\n");
                break;
            }
        }
        round++;
        printf("\n\n\n\nKone   : Guess %d\n\n\n\n\n", round);
        printf("Kisuke : The word that you have guessed is ");
        scanf("%s", guess);
        // It will check whether the word is real or not
        while (is_it_a_word(guess, words, str_len) == 0)
        {
            printf("Kisuke : My brain is not braining is \"%s\" is a real word with the length %d? No it is not!\n", guess, str_len);
            printf("Kisuke : I have to guess a new word ");
            scanf("%s", guess);
        }
        printf("\n");
        verifyTheGuess(word, guess, temp, temp, temp, "Aizen  :");
    }
}