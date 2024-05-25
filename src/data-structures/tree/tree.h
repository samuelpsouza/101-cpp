#include <stdbool.h>

typedef struct tree Tree;

Tree* new_empty_tree(void);
Tree* new_tree(char c, Tree* left, Tree* right);
Tree* free_tree(Tree* t);
bool empty_tree(Tree* t);
bool is_int_tree(Tree* t);
void print_tree(Tree* t);