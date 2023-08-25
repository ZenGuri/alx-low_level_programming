#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

typedef struct Node
{
    char *str;
    unsigned int len;
    struct Node *next;
} Node;

size_t print_list(const Node *h);
size_t list_len(const Node *h);
Node *add_node(Node **head, const char *str);
Node *add_node_end(Node **head, const char *str);
void free_list(Node *head);

#endif

