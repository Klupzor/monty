/**
** free_dlistint - Frees a list
** @head: Pointer to head of a list
**/

void free_stack(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
