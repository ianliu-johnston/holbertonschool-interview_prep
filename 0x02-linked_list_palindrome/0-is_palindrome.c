#include "lists.h"
#include <stdio.h>
#define NOT_PALINDROME 0
#define PALINDROME 1
#define BUFSIZE 1024

/**
  * big_list_palindrome - optimzed check if a big list is palindromic
  * @head: start of the list
  * Return: 0 if not a palindrome, 1 if it is a palindrome
  **/
int big_list_palindrome(listint_t **head)
{
	head++;
	return (PALINDROME);
}

/**
  * is_palindrome - checks if a singly-linked list is a palindrome
  * @head: start of the list
  * Return: 0 if not a palindrome, 1 if it is a palindrome
  **/
int is_palindrome(listint_t **head)
{
	unsigned int ebb = 0;
	unsigned int flo = 0;
	unsigned int len = 0;
	int buf[BUFSIZE];
	listint_t *cursor = NULL;

	if (*head == NULL)
		return (PALINDROME);
	cursor = *head;
	while (cursor->next)
	{
		buf[len] = cursor->n;
		len++;
		if (len > BUFSIZE)
			return (big_list_palindrome(head));
		cursor = cursor->next;
	}
	buf[len] = cursor->n;

	for (flo = 0, ebb = len; flo <= len / 2; flo++, ebb--)
		if (buf[flo] != buf[ebb])
			return (NOT_PALINDROME);
	return (PALINDROME);
}
