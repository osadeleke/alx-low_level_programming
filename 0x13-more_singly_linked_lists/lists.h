#ifndef LIST_H
#define LIST_H

/* headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* structures */
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function prototypes */
int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
