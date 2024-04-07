#include <stdbool.h>

typedef struct list List;

/*
  Create a empty linked list
*/

List *new_list(void);
void free_list(List *list);

/*
  Returns the number of data elements in the list. O(n)
*/
int size(List *list) ;

/*
  Returns true if empty
*/
bool empty(List *list);

/*
  Returns the value of the nth item (starting at 0 for first)
*/
int value_at(List *list, int index);

/*
  Adds an item to the front of the list
*/
void push_front(List *list, int info);

/*
  Remove the front item and return its value
*/
int pop_front(List *list);

/*
  Adds an item at the end
*/
void push_back(List *list, int info);

/*
  Removes end item and returns its value
*/
int pop_back(List *list);

/*
  Get the value of the front item
*/
int front(List *list);

/*
  Get the value of the end item
*/
int back(List *list);

/*
  Insert value at index, so the current item at that index is pointed to by the new item at the index
*/
void insert(List *list, int index, int value);

/*
  Removes node at given index
*/
void erase(List *list, int index); 

/*
  Returns the value of the node at the nth position from the end of the list
*/
int value_n_from_end(List *list, int position);

/*
  Reverses the list
*/
void reverse(List *list);

/*
  Removes the first item in the list with this value
*/
void remove_value(int info);

/*
  
*/
void add_before(List* list, List *node, int info);
