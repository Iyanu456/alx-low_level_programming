#include "lists.h"
/**
 * pop_listint - frees a node list
 * @head: head node pointer
 * Description: frees a node list
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (i < index)
	{
		temp = temp->next;

		if  (temp == NULL)
			return (NULL);
		i++;
	}

	return (temp);
}
