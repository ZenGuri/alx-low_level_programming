#ifndef LISTS_H
#define LISTS_H

/* Define your structure here */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */

