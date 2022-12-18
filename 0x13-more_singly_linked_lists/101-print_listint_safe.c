#include <stdlib.h>
#include "lists.h"

/**
 * numNodes - helps print safely by comp num nodes in loop
 * @head: sll HEAD pointer
 * Return: num of nodes in circular or 0
 */
size_t numNodes(const listint_t *head)
{
	const listint_t *nodeA, *nodeB;
	size_t count = 1;

	if (!head)
		return (0);
	if (!head->next)
		return (0);
	nodeA = head->next;
	nodeB = head->next->next;
	while (nodeB)
	{
		if (nodeA == nodeB)
		{
			nodeA = head;
			while (nodeA != nodeB)
			{
				count++;
				nodeA = nodeA->next;
				nodeB = nodeB->next;
			}
			nodeA = nodeA->next;
			while (nodeA != nodeB)
			{
				count++;
				nodeA = nodeA->next;
			}
			return (count);
		}
		nodeA = nodeA->next;
		nodeB = nodeB->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints SLL listint_t list
 * @head: sll HEAD pointer
 * Return: num of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *nodeA;
	size_t count = 0, i = 0;

	count = numNodes(head);
	nodeA = head;
	if (count == 0)
	{
		while (nodeA)
		{
			count++;
			printf("[%p] %d\n", (void *)nodeA, nodeA->n);
			nodeA = nodeA->next;
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)nodeA, nodeA->n);
			nodeA = nodeA->next;
		}
		printf("-> [%p] %d\n", (void *)nodeA, nodeA->n);
	}
	return (count);
}
