#include <check.h>
#include "linked-list.h"

START_TEST (create_an_empty_singly_linked_list)
{
  List* list = new_list();
  ck_assert_int_eq(list, NULL);
}
END_TEST
