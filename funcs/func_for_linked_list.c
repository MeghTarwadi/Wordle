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
    // if the word has character at that position that list has than it is fixed else it is not
    // this will lead to find guessed word easily
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
    /*
    This function will lead to find the frequency of characters and based on that it will give best possible
    word that fits most of the requirements it analyses how many times each alphabets is repeated and than
    it sort those repeated alphabets in descending order and than the word containing maximum amount of these alphabets
    will be selected so that if word is not correct than it will help to remove majority of words which have those alphabets
    hence it will lead to narrow down the words
    */
    Node *head = ptr;
    /*
    I used LL for this since it is ******easy****** to handle
    Its a joke btw!! i m not using linked list for this purpose
    its a because C dont have list data structure as pythons has but it has struct so i did this
    and another reason is that it is great for memory management bcos assume that its 4-5 th round
    we already have narrowed down words by so much hance we dont need to store all 26 character in memory
    we can store only those which are required
    */
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

    // this loop will count the frequency of each character FOR each words that are in ptr
    chrCounter *copylist;
    for (ptr; ptr->next != NULL; ptr = ptr->next)
    {
        // this loop will let us use every character
        for (int i = 0; i < len; i++)
        {
            // list stores a:10 , b:60 , c:15 etc in linked list formate so to find whether ptr->word[i] is in this list or not
            copylist = list;
            for (copylist; copylist->next != NULL; copylist = copylist->next)
            {
                // if list has that ptr->word[i] character than we will increment its count by 1
                if (copylist->alphabets == ptr->word[i])
                {
                    copylist->counts++;
                    break;
                }
            }
            // if its last node than i checked it manually... bcos it was showing core dump and took like 3 hr so i gave ip and checked last node manually
            if (copylist->alphabets == ptr->word[i])
            {
                copylist->counts++;
            }
            // if its not than we will add a new node with that character that list dont have and make its count 1
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
    // To find most repeated top(5 or 6or 7 etc based on length) alphabets
    chrCounter *temp = (chrCounter *)malloc(sizeof(chrCounter));
    printf("Aizen  : Now based on those words by calculating how often each words repeats and ranking them...\n");
    printf("Aizen  : The word which contains ");
    for (int i = 0; i < len; i++)
    {
        temp->counts = 0;
        copylist = list;
        /*
        Selection sort but instead of sorting...it will directly store that characterw which is most repeated
        and revalue its count by zero so that it wont get selected as maximum again
        */
        for (copylist; copylist != NULL; copylist = copylist->next)
        {
            if (copylist->counts > temp->counts)
            {
                temp = copylist;
                toprepeats[i] = copylist->alphabets;
            }
        }
        // this things here its just to make output look better thats all
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
    // now based on that to find the word which contains those characters
    for (int i = len - 1; i >= 0; i--)
    {
        /*
        topreapeats is in decending order it will check whether all character exist or not
        if not than it will remove least segnificant character and check again and repeats this till it get word
        which contains those characters by making sure that the word which is getting selected has tha characters which are
        repeated most in the all possible words list hence it will allow to narrow down the list significantly
        */
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
    /*
    If list has characters that word has than it will return 1
    else 0
    but if word has the character which are in list but if word has those
    character same positioned as in list than it will return 0 bcos it means that
    character is not fixed hence it cant be in that position.

    this will lead to find fixed characters easily
    */
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
    /*
    if word contains character that list contains than it will return 0;
     */
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


// you may think why i didnt removed this code that i havent even used 
// Its bcos i wasted 2 days on debugging core dump
// its a joke btw!! but its based on truth 
// the real reason behind this is that its more optimised than what i have coded above
// its just that i dont want to see core dumping me over and over again  :')




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
    // this does what it says it removes words which has 0 probability to be a guessed word
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

    // this will remove words which doesnt meet the conditions and since its a LL the memory will be freed hance it will be more efficient
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
    // this thing is just to make output look clean like if possible words are more than 5 than it will show 5 and remaining word will be shown with integer as count
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
        printf("...\n");
    }
    else
    {
        printf(" and %d more\n", count - flag);
    }

    node = head;
    statistics(node, count, selected);
    printf("\nAizen  : By analysing this I came upto solution that \"%s\" is the best go\n", selected);
}