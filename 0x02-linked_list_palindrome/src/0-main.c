#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_pal_wrap - wrapper for a fxn return
 * @head: Start of list
 */
void is_pal_wrap(listint_t **head)
{
	if (is_palindrome(head) == 1)
		printf("Linked list is a palindrome\n");
	else
		printf("Linked list is not a palindrome\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;

	printf("Empty list\n");
	is_pal_wrap(&head); /* is it a palindrome? */

	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 17);
	add_nodeint_end(&head, 972);
	add_nodeint_end(&head, 50);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 50);

	print_listint(head);
	printf("----------------\n");
	is_pal_wrap(&head); /* how bout now? */

	add_nodeint_end(&head, 972);
	add_nodeint_end(&head, 17);
	add_nodeint_end(&head, 1);
	print_listint(head);

	printf("----------------\n");
	is_pal_wrap(&head); /* now? */

	free_listint(head);

	return (0);
}
