#include <stdbool.h>

typedef struct IntVector {
  int size;
  int capacity;
  int* data;
} IntVector;


/*
 * Return the number of items
*/

int size(IntVector* vector);

/*
 * Return the number of items it can hold 
*/

int capacity(IntVector* vector);

/*
 * Return true if it holds any item 
*/

bool is_empty(IntVector* vector);

/*
 * Returns the item at a given index, blows up if index out of bounds
*/
int at(int index, IntVector* vector);


void push(int item, IntVector* vector);

/*
 * Inserts item at index, shifts that index's value and trailing elements to the right
*/
void insert(int index, int item, IntVector* vector);

/*
 * Can use insert above at index 0
*/
void prepend(int item, IntVector vector);

/*
 * Remove from end, return value
*/
int pop(IntVector* vector);

/*
 * Delete item at index, shifting all trailing elements left
*/
void delete(int index, IntVector* vector);

/*
 * Looks for value and removes index holding it (even if in multiple places)
*/
void remove(int item, IntVector* vector);

/*
 * Looks for value and returns first index with that value, -1 if not found
*/
int find(int item, IntVector* vector);

/*
 * when you reach capacity, resize to double the size
 * when popping an item, if the size is 1/4 of capacity, resize to half
*/
static void resize(int new_capacity, IntVector* vector);
