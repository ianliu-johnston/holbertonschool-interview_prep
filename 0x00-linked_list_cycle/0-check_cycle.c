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
	listint_t *tortoise, *hare;

	tortoise = list;
	hare = list->next;
	while (tortoise && tortoise->next && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
			return (CYCLE);
	}
	return (NOCYCLE);
}
