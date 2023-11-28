#include "lists.h"

/**
 * strdup - function with one argument
 * @str: string argument
 *
 * Return: pointer
 */

char *strdup(const char *str)
{
	char *dup = malloc(strlen(str) + 1);

	if (dup == NULL)
	{

		return (NULL);
	}

	char *p;

	p = dup;

	while (*str)
	{
		*p++ = *str++;
		*p = '\0';
	}

	return (dup);
}

/**
 * add_node - Retourne le nombre d'elements d'une liste
 * @head: Tete de la liste
 * @str: string
 *
 * Return: Numbre d'elements dans une liste
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(list_t));
	if (*head)
	{
		if (str)
		{
			(*head)->len = strlen(str);
			(*head)->str = strdup(str);
		}
		else
		{
			(*head)->len = 0;
			(*head)->str = "(nil)";
		}
		(*head)->next = new_node;
	}
	return (*head);
}
