#include "lists.h"
/**
 * add_node_end - adds a new node to the end of a list
 * @head: head node pointer
 * @str: string
 * Description: adds a new node to the end of a list
 * Return: size
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	int len = 0;

	char *dup;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);

	new_node->str = dup;

	while (str[len] != '\0')
		len++;

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
			temp->next = new_node;
		}
	}
	return (new_node);
}
