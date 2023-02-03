#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *tortoise, *hare;

tortoise = hare = head;
while (tortoise && hare && hare->next)
{
	tortoise = tortoise->next;
	hare = hare->next->next;
	if (tortoise == hare)
	{
		tortoise = head;
		break;
	}
	
