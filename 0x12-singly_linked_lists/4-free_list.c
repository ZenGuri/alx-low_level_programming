#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
    while (head != NULL)
    {
        list_t *temp = head;
        head = head->next;
        free(temp->str);
        free(temp);
    }
}

