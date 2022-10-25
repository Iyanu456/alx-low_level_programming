#include "lists.h"
/**
 * free_node - frees a node list
 * @head: head node pointer
 * Description: frees a node list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *curr_node, *next_node;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	else
	{
		curr_node = head;
		
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
			next_node  = curr_node;
			free(curr_node);
			next_node = next_node->next;
			curr_node = next_node;
			free(next_node);
		}
	}
}
