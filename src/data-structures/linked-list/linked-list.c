#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked-list.h"

typedef struct  list
{
    int info;
    struct list *next;
} List;

List *new_list(void)
{
    return NULL;
}

void free_list(List *list)
{
    free(list);
}

int size(List *list)
{
    int count = 0;
    List *head = list;
    while(head->next != NULL)
    {
        count++;
    }

    return count;
}
