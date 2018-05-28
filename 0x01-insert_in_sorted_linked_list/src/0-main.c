#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_1 - build a list, add a node, tear it down
 * @head: the list
 */
void check_1(listint_t **head)
{
	add_nodeint_end(head, 2);
	add_nodeint_end(head, 3);
	add_nodeint_end(head, 4);
	add_nodeint_end(head, 98);
	add_nodeint_end(head, 402);
	add_nodeint_end(head, 1024);
	print_listint(*head);

	printf("-----------------\n");

	insert_node(head, 27);

	print_listint(*head);

	printf("=================\n");
	printf("Insert in front\n");
	insert_node(head, 0);
	print_listint(*head);

	free_listint(*head);
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
	check_1(&head);

	printf("=================\n");
	head = NULL;
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);

	print_listint(head);
	printf("Insert in back\n");
	insert_node(&head, 1111);


	print_listint(head);

	free_listint(head);


	printf("=================\n");
	head = NULL;
	printf("Empty List\n");
	insert_node(&head, 27);
	print_listint(head);

	printf("Exiting\n");

	free_listint(head);
	return (0);
}
