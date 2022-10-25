#include "lists.h"
/**
 * free_node - frees a node list
 * @head: head node pointer
 * Description: frees a node list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *prev_node;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	else
	{
		prev_node = head;
		while (prev_node->next != NULL)
		{
			free(head);
			prev_node = prev_node->next;
			head = prev_node;
		}
	}
}
