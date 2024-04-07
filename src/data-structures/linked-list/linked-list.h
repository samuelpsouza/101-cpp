#include <stdbool.h>

typedef struct list List;

/*
  Create a empty linked list
*/

List *new_list();
void free_list();

/*
  Returns the number of data elements in the list. O(n)
*/
int size() ;

/*
  Returns true if empty
*/
bool empty();

/*
  Returns the value of the nth item (starting at 0 for first)
*/
int value_at(int index);

/*
  Adds an item to the front of the list
*/
void push_front(int info);

/*
  Remove the front item and return its value
*/
int pop_front();

/*
  Adds an item at the end
*/
void push_back(int info);

/*
  Removes end item and returns its value
*/
int pop_back();

/*
  Get the value of the front item
*/
int front();

/*
  Get the value of the end item
*/
int back();

/*
  Insert value at index, so the current item at that index is pointed to by the new item at the index
*/
void insert(int index, int value);

/*
  Removes node at given index
*/
void erase(int index); 

/*
  Returns the value of the node at the nth position from the end of the list
*/
int value_n_from_end(int position);

/*
  Returns the head reversed
*/
List* reverse();

/*
  Removes the first item in the list with this value
*/
void remove_value(int info);

/*
  
*/
void add_before(List* list, List *node, int info);
