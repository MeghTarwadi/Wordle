#include <stdio.h>
#include <stdlib.h>
#include "../include/func_for_linked_list.h"
#include "../include/func_for_returns_funcs.h"

// void remove_which_are_not_fixed(Node *node, char *list);
// void keep_which_contains(Node *node, char *list);
// void remove_words_which_arent_in_word(Node *node, char *list);

int fixed(char *list, char *word);
int contains(char *list, char *word);
int doesntContain(char *list, char *word);
void remove_unecessary(Node *head, char *doesnt_contain, char *contains, char *fixed);

int fixed(char *list, char *word)
{

    for (int i = 0; list[i] != '\0'; i++)
    {
        if ((int)list[i] != 32)
        {
            if (word[i] != list[i])
            {
                return 0;
            }
        }
    }
    return 1;
}
int contains(char *list, char *word)
{
    for (int i = 0; list[i] != '\0'; i++)
    {
        if ((int)list[i] != 32)
        {
            if (word[i] == list[i])
            {
                return 0;
            }
            if (has_char(word, list[i], i) == 1)
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
            printf("%s has %d of %c\n", word, has_char(word, list[i], -1), list[i]);
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

// char *doesnt_contain = "xyd   ";
// char *fixed = "a p   ";
// char *contains = "   e  ";
void remove_unecessary(Node *head, char *doesnt_contain, char *contain, char *fix)
{
    Node *node = (Node *)malloc(sizeof(Node));
    Node *clone = node;
    node->next = head;
    int count = 0;
    while (node->next->next != NULL)
    {
        if (fixed(fix, node->next->word) == 1 && contains(contain, node->next->word) == 1 && doesntContain(doesnt_contain, node->next->word) == 1)
        {
            if (node->next != NULL)
            {
                node = node->next;
            }
        }
        else
        {
            node->next = node->next->next;
        }
        // remove_words_which_arent_in_word(node, doesnt_contain);
        // keep_which_contains(node, contains);
        // remove_which_are_not_fixed(node, fix);
    }
    head = clone->next;
    node = head;
    while (node->next != NULL)
    {
        count++;
        printf("%s\n", node->word);

        if (node->next != NULL)
        {
            node = node->next;
        }
    }
    printf("%d\n", count);
}