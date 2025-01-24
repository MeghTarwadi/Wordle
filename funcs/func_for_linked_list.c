#include <stdio.h>
#include <stdlib.h>
#include "../include/func_for_linked_list.h"
#include "../include/func_for_returns_funcs.h"
#include "../include/funcs_for_str_manipulation.h"

// void remove_which_are_not_fixed(Node *node, char *list);
// void keep_which_contains(Node *node, char *list);
// void remove_words_which_arent_in_word(Node *node, char *list);

int fixed(char *list, char *word);
int contains(char *list, char *word);
int doesntContain(char *list, char *word);
void statistics(Node *ptr, int count, char *selected);
void remove_unecessary(Node *head, char *doesnt_contain, char *contain, char *fix, char *selected);

int fixed(char *list, char *word)
{
    for (int i = 0; i < length(word); i++)
    {
        if ((int)list[i] != 95)
        {

            if (word[i] != list[i])
            {
                return 0;
            }
        }
    }
    return 1;
}

void statistics(Node *ptr, int count, char *selected)
{
    Node *head = ptr;
    typedef struct countAlpha
    {
        char alphabets;
        int counts;
        struct countAlpha *next;

    } chrCounter;
    int len = length(selected);
    // int len = 24;
    chrCounter *list;

    list = (chrCounter *)malloc(sizeof(chrCounter));
    list->alphabets = ptr->word[0];
    list->counts = 1;
    list->next = NULL;

    chrCounter *copylist;
    for (ptr; ptr->next != NULL; ptr = ptr->next)
    {
        for (int i = 0; i < len; i++)
        {
            copylist = list;
            for (copylist; copylist->next != NULL; copylist = copylist->next)
            {
                if (copylist->alphabets == ptr->word[i])
                {
                    copylist->counts++;
                    break;
                }
            }
            if (copylist->alphabets == ptr->word[i])
            {
                copylist->counts++;
            }
            else
            {
                if (ptr->word[i] != '\0')
                {
                    chrCounter *temp = (chrCounter *)malloc(sizeof(chrCounter));
                    temp->alphabets = ptr->word[i];
                    temp->counts = 1;
                    temp->next = NULL;
                    copylist->next = temp;
                }
            }
        }
    }
    copylist = list;
    // for (copylist; copylist != NULL; copylist = copylist->next)
    // {
    //     printf("%c %d \n", copylist->alphabets, copylist->counts);
    // }
    char toprepeats[len];
    chrCounter *temp = (chrCounter *)malloc(sizeof(chrCounter));
    printf("Aizen  : Now based on those words by calculating how often each words repeats and ranking them...\n");
    printf("Aizen  : The word which contains ");
    for (int i = 0; i < len; i++)
    {
        temp->counts = 0;
        copylist = list;
        for (copylist; copylist != NULL; copylist = copylist->next)
        {
            if (copylist->counts > temp->counts)
            {
                temp = copylist;
                toprepeats[i] = copylist->alphabets;
            }
        }
        if (toprepeats[i] == '\0')
        {
            continue;
        }
        if (i < len - 1)
        {

            printf("%c , ", toprepeats[i]);
        }
        else
        {
            printf("%c ", toprepeats[i]);
        }
    }
    printf("\n");
    for (int i = len - 1; i >= 0; i--)
    {
        ptr = head;
        for (ptr; ptr->next != NULL; ptr = ptr->next)
        {
            int flag = 1;
            for (int j = i; j >= 0; j--)
            {
                // countingstemp++;
                if (has_char(ptr->word, toprepeats[j], -1) == 0)
                {
                    // printf("%s\n", ptr->word);
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                // printf("%d\n", countingstemp);
                copy_string(ptr->word, selected);
                return;
            }
            // printf("%c %d \n", copylist->alphabets, copylist->counts);
        }
    }
}

int contains(char *list, char *word)
{
    for (int i = 0; list[i] != '\0'; i++)
    {
        if ((int)list[i] != 95)
        {
            if (word[i] == list[i])
            {
                return 0;
            }
            if (has_char(word, list[i], i) == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int doesntContain(char *list, char *word)
{
    for (int i = 0; list[i] != '\0'; i++)
    {
        if ((int)list[i] != 32)
        {
            if (has_char(word, list[i], -1) > 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

// void remove_which_are_not_fixed(Node *node, char *list)
// {
//     Node *temp = node;
//     Node *freedom;
//     for (int i = 0; list[i] != '\0'; i++)
//     {
//         if ((int)list[i] != 32)
//         {
//             while (temp->next != NULL && temp->word[i] != list[i])
//             {
//                 freedom = temp;
//                 temp = temp->next;
//                 free(freedom->word);
//             }
//             node->word = temp->word;
//             node->next = temp->next;
//         }
//     }
// }
// void keep_which_contains(Node *node, char *list)
// {
//     Node *temp = node;
//     Node *freedom;
//     for (int i = 0; list[i] != '\0'; i++)
//     {
//         if ((int)list[i] != 32)
//         {
//             while (temp->next != NULL && has_char(temp->word, list[i], i) == 1)
//             {
//                 freedom = temp;
//                 temp = temp->next;
//                 free(freedom->word);
//             }
//             node->word = temp->word;
//             node->next = temp->next;
//         }
//     }
// }
// void remove_words_which_arent_in_word(Node *node, char *list)
// {
//     Node *temp = node;
//     Node *freedom;
//     for (int i = 0; list[i] != '\0'; i++)
//     {
//         if ((int)list[i] != 32)
//         {
//             while (temp->next != NULL && has_char(temp->word, list[i], -1) == 0)
//             {
//                 freedom = temp;
//                 temp = temp->next;
//                 free(freedom->word);
//             }
//             node->word = temp->word;
//             node->next = temp->next;
//         }
//     }
// }

void remove_unecessary(Node *head, char *doesnt_contain, char *contain, char *fix, char *selected)
{
    Node *node = head;
    Node *temp;
    int count = 0;

    printf("\nAizen  : Since some character which are fixed are %s \n", fix);
    printf("Aizen  : Hnece by removing words which dont have those characters positioned...\n");
    printf("\nAizen  : And Since word dont happen to have characters %s \n", doesnt_contain);
    printf("Aizen  : By removing words which have those characters and...\n");
    printf("\nAizen  : Also there are characters which are in words such as %s\n", contain);
    printf("Aizen  : Hence by excluding words which has those characters at that position\n");
    printf("Aizen  : And by excluding words which dont have those characters\n\n");

    while (node->next != NULL)
    {
        if (fixed(fix, node->word) == 1 && contains(contain, node->word) == 1 && doesntContain(doesnt_contain, node->word) == 1)
        {
            if (node->next != NULL)
            {
                node = node->next;
            }
        }
        else
        {
            if (node->next != NULL)
            {
                // printf("free\n");
                temp = node->next;
                node->word = temp->word;
                node->next = temp->next;
                free(temp);
            }
        }
        // remove_words_which_arent_in_word(node, doesnt_contain);
        // keep_which_contains(node, contains);
        // remove_which_are_not_fixed(node, fix);
    }
    printf("Aizen  : There remains words such as ");

    node = head;
    int flag = 0;
    while (node->next != NULL)
    {
        if (count < 5)
        {
            printf("%s ", node->word);
        }
        count++;
        if (count < 5)
        {
            printf(", ");
        }
        if (count >= 5 && flag == 0)
        {
            printf("...");
            flag++;
        }
        if (node->next != NULL)
        {
            node = node->next;
        }
    }
    if (flag == 0)
    {
        printf("...");
    }
    else
    {
        printf(" and %d more\n", count - flag);
    }

    node = head;
    statistics(node, count, selected);
    printf("\n\n\nAizen  : By analysing this I came upto solution that \"%s\" is the best go\n", selected);
}