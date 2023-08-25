#include <stddef.h>  /* For size_t */
#include "lists.h"    /* Make sure you include the correct header */

size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}

