#include "lists.h"
/**
 * add_node - creates a new node
 * @head: head node pointer
 * @str: string
 * Description: creates a new node
 * Return: size
 */
void free_list(list_t *head)
{
	list_t *curr_node, *next_node;

	if (head == NULL)
		return;
	if (head->next == NULL)
		free(head);
	else
	{
		curr_node = head;
		free(head);
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
