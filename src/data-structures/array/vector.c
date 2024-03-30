#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int get_proper_capacity(int capacity)
{
  if (capacity <= 16)
  {
    return 16;
  }
  else if (capacity > 16)
  {
    int max = 2 * 16;
    while (capacity > max)
    {
      max *= 2;
    }
  }

  return capacity;
}

IntVector *new_int_vector(int capacity)
{
  IntVector *vector = (IntVector *)malloc(sizeof(IntVector));

  int found_capacity = get_proper_capacity(capacity);

  vector->size = 0;
  vector->capacity = found_capacity;
  vector->data = (int *)malloc(found_capacity * sizeof(int));

  return vector;
}
