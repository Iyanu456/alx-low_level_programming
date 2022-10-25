#include "lists.h"
/**
 * free_node - frees a node list
 * @head: head node pointer
 * Description: frees a node list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
