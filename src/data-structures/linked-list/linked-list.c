#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked-list.h"

typedef struct list
{
    int info;
    struct list *next;
} List;

static List *head = NULL;
static List *tail = NULL;

List *new_list(void)
{
    tail->next = head;
    return head;
}

void free_list()
{
    free(tail);
    free(head);
}

int size()
{
    int count = 0;
    List *ref_head = head;
    while (ref_head->next != NULL)
    {
        count++;
        ref_head = ref_head->next;
    }

    return count;
}

bool empty()
{
    return (head->next != NULL);
}

int value_at(int index)
{
    int count = 0;
    List *head_node = head;
    while (count < index)
    {
        head_node = head_node->next;
        count++;
    }

    return head_node->info;
}

void push_front(int info)
{
    List *node = (List *)malloc(sizeof(List));
    node->info;

    if(head->next == NULL)
    {
        tail->next = node;
    }

    node->next = head->next;
    head->next = node;    
}

int pop_front()
{
    List *to_be_removed = head->next;
    head->next = head->next->next;
    int value = to_be_removed->info;
    free(to_be_removed);
    return value;
}

void push_back(int info)
{
    List *new_node = (List*)malloc(sizeof(List));
    new_node->info = info;
    new_node->next->next = new_node;
    tail->next = new_node;
}

int pop_back()
{
    List *prev_to_be_removed = head->next;
    while(prev_to_be_removed->next->next != NULL)
    {
        prev_to_be_removed->next = prev_to_be_removed->next;
    }

    tail->next = prev_to_be_removed;
    int value = prev_to_be_removed->next->info;
    free(prev_to_be_removed->next);
    return value;
}

int front()
{
    return head->next->info;
}

int back()
{
    return tail->next->info;
}

void insert(int index, int value)
{}

void erase(int index)
{}

int value_n_from_end(int position)
{}

List* reverse()
{
    List *prev_node = NULL;
    List *curr_node = head;
    List *next_node = NULL;
    while(curr_node != NULL)
    {
        next_node = curr_node->next;
        curr_node->next = prev_node;
        prev_node = curr_node;
        curr_node = next_node;
    }

    return prev_node;
}

void remove_value(int info);

void add_before(List *list, List *node, int info);
