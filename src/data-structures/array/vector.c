#include <stdlib.h>
#include <assert.h>
#include "vector.h"

const int INITIAL_CAPACITY = 16;

static int get_proper_capacity(int capacity)
{
  assert(capacity > 0);

  if (capacity <= INITIAL_CAPACITY)
  {
    return capacity;
  }
  else if (capacity > INITIAL_CAPACITY)
  {
    int max = 2 * INITIAL_CAPACITY;
    while (capacity > max)
    {
      max *= 2;
    }
  }

  return capacity;
}

static void resize(int new_capacity, IntVector *vector)
{
  int *increased_arr = (int *)malloc(sizeof(int) * new_capacity);

  for (int i = 0; i < vector->size; i++)
  {
    *(increased_arr + i) = *(vector->arr + i);
  }
  free(vector->arr);
  vector->arr = increased_arr;
  vector->capacity = new_capacity;
}

static void increase_size(IntVector *vector)
{
  if (vector->size == vector->capacity)
  {
    resize(vector->capacity * 2, vector);
  }

  vector->size++;
}

static void decrease_size(IntVector *vector)
{
  float tf = vector->size / (float)vector->capacity;
  if (tf <= 0.25)
  {
    resize(vector->capacity / 2, vector);
  }
}

IntVector *new(int capacity)
{
  IntVector *vector = (IntVector *)malloc(sizeof(IntVector));

  int found_capacity = get_proper_capacity(capacity);

  vector->size = 0;
  vector->capacity = found_capacity;
  vector->arr = (int *)malloc(found_capacity * sizeof(int));

  return vector;
}

int size(IntVector *vector)
{
  return vector->size;
}

int capacity(IntVector *vector)
{
  return vector->capacity;
}

bool is_empty(IntVector *vector)
{
  return vector > 0;
}

int at(int index, IntVector *vector)
{
  return *(vector->arr + index);
}

void push(int item, IntVector *vector)
{
  increase_size(vector);
  int *index = vector->arr + size(vector);
  index = item;
}

void insert(int index, int item, IntVector *vector)
{
  increase_size(vector);

  for (int i = index; i < vector->size; i++)
  {
    *(vector->arr + (i + 1)) = *(vector->arr + i);
  }

  *(vector->arr + index) = item;
}

void prepend(int item, IntVector *vector)
{
  insert(0, item, vector);
}

int pop(IntVector *vector)
{
  int *index = vector->arr + size(vector);
  int item = *(index);
  delete (index, vector);
  decrease_size(vector);
  return item;
}

void delete(int index, IntVector *vector)
{
  for (int i = index; i < vector->size; i++)
  {
    *(vector->arr + i) = *(vector->arr + (i + 1));
  }

  decrease_size(vector);
}

int find(int item, IntVector *vector)
{
  int index = -1;
  int counter = 0;

  while (counter <= vector->size)
  {
    int possible_item = *(vector->arr + counter);

    if (possible_item == item)
    {
      index = counter;
      break;
    }
    counter++;
  }

  return index;
}

// TODO: fix to remove all duplicates
void remove(int item, IntVector *vector)
{
  int found_item = find(item, vector);
  if (found_item != -1)
  {
    *(vector->arr + found_item) = NULL;
    decrease_size(vector);
  }
}
