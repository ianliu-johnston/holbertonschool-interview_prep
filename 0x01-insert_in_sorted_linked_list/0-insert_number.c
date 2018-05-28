#include "lists.h"
#include <stdio.h>

/**
  * insert_node - Insert a node into a sorted linked list.
  * @head: Start of the list
  * @number: value of node to insert
  * Return: NULL if failed, address of the new node if success
  **/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *cursor = NULL;
	listint_t *new_node = NULL;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = number;
	new_node->next = NULL;

	cursor = *head;
	while (cursor->next && cursor->next->n < number)
		cursor = cursor->next;

	if (cursor == *head)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (cursor->next == NULL)
		cursor->next = new_node;
	else
	{
		new_node->next = cursor->next;
		cursor->next = new_node;
	}
	return (new_node);
}
