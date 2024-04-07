#include <check.h>
#include "vector.h"

START_TEST (create_an_empty_singly_linked_list)
{
  IntVector* int_vector = new_vector(2);
  ck_assert_int_eq(int_vector, NULL);
}
END_TEST
