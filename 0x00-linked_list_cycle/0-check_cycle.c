#include "lists.h"
#include <stdio.h>
#define NOCYCLE 0
#define CYCLE 1

/**
  * check_cycle - Checks singly linked lists for cycles
  * @list: Singly linked list
  * Return: 0 if no cycle, 1 if cycle
  **/
int check_cycle(listint_t *list)
{
	listint_t *head;

	head = list;
	while ((head = head->next) != NULL)
		if ((head->next) == list)
			return (CYCLE);
	return (NOCYCLE);
}
