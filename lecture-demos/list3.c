#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node{
    int number;
    struct node *next;
} node;

int main(void){
    // Memory for numbers
    node *list = NULL;

    // Build list
    for (int i = 0; i < 3; i++){
        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL){//Malloc 失败会返回null
            return 1;
        }
        n->number = get_int("Number: ");
        n->next = NULL;

        //If list is empty
        if (list == NULL){
            list = n;
        }

        //If number belongs at beginning of list, 例如在2前面插入一个1
        else if (n->number < list->number){
            n->next = list;
            list = n;
        }

        //If number belongs later in list
        else{
            for (node *ptr = list; ptr != NULL; ptr = ptr->next){
                // If at end of list, 和list2后面的代码相同
                if (ptr->next == NULL){
                    //Append node
                    ptr->next = n;
                    break;
                }

                //If in middle of list
                if (n->number < ptr->next->number){
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }
