
typedef struct Vector {
  int size;
  int capacity;
  int* data;
}


/*
 * Return the number of items
 */

int size();

/*
 * Return the number of items it can hold 
 */

int capacity();

/*
 * Return true if it holds any item 
 */

bool is_empty();

at(int index);

void push(int n);

void insert(int index, item) - inserts item at index, shifts that index's value and trailing elements to the right
void prepend(item) - can use insert above at index 0
int pop() - remove from end, return value
void delete(index) - delete item at index, shifting all trailing elements left
void remove(item) - looks for value and removes index holding it (even if in multiple places)
int find(item) - looks for value and returns first index with that value, -1 if not found

 /*
  * when you reach capacity, resize to double the size
  * when popping an item, if the size is 1/4 of capacity, resize to half
 */
static void resize(new_capacity);
