
typedef struct list
{
  int info;
  struct list *next;
} List;

/*
  Create a empty linked list
*/

List *new_list(void);
void free_list(List *list);
