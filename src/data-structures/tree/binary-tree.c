#include <stdlib.h>
#include <tree.h>

typedef struct tree
{
    char info;
    struct tree *left;
    struct tree *right;
} Tree;

Tree *new_empty_tree()
{
    return NULL;
}

Tree *new_tree(char c, Tree *left, Tree *right)
{
    Tree *t = (Tree *)malloc(sizeof(Tree));
    t->info = c;
    t->left = left;
    t->right = right;

    return t;
}

Tree *free_tree(Tree *t)
{
    if (!is_empty(t))
    {
        free_tree(t->left);
        free_tree(t->right);
        free(t);
    }

    return NULL;
}

bool is_empty(Tree *t)
{
    return t == NULL;
}

bool is_in_tree(Tree *t, char c)
{
    if (is_empty(t))
    {
        return false;
    }

    return t->info == c || is_in_tree(t->left, c) || is_in_tree(t->right, c);
}

void print_tree(Tree *t)
{
    printf("<");

    if (!is_empty(t))
    {
        printf("%c ", t->info);
        print_tree(t->left);
        print_tree(t->right);
    }

    printf(">");
}