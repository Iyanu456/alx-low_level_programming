#include "lists.h"
/**
 * get_nodeint_at_index - searches for a node index
 * @head: head node pointer
 * @index: index
 * Description: searches for a node index
 * Return: list_int
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
