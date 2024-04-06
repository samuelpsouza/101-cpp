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
  int *increased_data = (int*) malloc(sizeof(int) * new_capacity);

  for (int i = 0; i < vector->size; i++)
  {
    *(increased_data + i) = *(vector->data + i);
    free(vector->data + i);
  }
  
  vector->data = increased_data;
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
  vector->data = (int *)malloc(found_capacity * sizeof(int));

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
  return *(vector->data + index);
}

void push(int item, IntVector *vector)
{
  increase_size(vector);
  int *index = vector->data + size(vector);
  index = item;
}

void insert(int index, int item, IntVector *vector)
{
}

void prepend(int item, IntVector *vector)
{
}

int pop(IntVector *vector)
{
  int *index = vector->data + size(vector);
  int item = *(index);
  delete (index, vector);
  decrease_size(vector);
  return item;
}

void delete(int index, IntVector *vector)
{
  decrease_size(vector);
}

void remove(int item, IntVector *vector)
{
  decrease_size(vector);
}

int find(int item, IntVector *vector)
{
  int index = -1;
  int counter = 0;

  while (counter <= vector->size)
  {
    int possible_item = *(vector->data + counter);

    if (possible_item == item)
    {
      index = counter;
      break;
    }
    counter++;
  }

  return index;
}
