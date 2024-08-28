#include "ft_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void	print_list(void *data)
{
	printf("%s \n", (char *)data);
}

int	cmp(void *s1, void *data_ref)
{
	return (s1 - data_ref);
}

void	ft_list_remove_if(t_list **head, void *data_ref, int (*cmp)())
{
	if ((*head == NULL) || (head == NULL))
		return;
	t_list *cur = *head;
	if (cmp(cur->data, data_ref) == 0)
	{
		*head = cur->next;
		free(cur);
		ft_list_remove_if(head, data_ref, cmp);
	}
	else
	{
		ft_list_remove_if(&cur->next, data_ref, cmp);
	}
}

int	ft_list_size(t_list *head)
{
	int	c;

	c = 0;
	while (head)
	{
		c++;
		head = head->next;
	}
	return (c);
}

void	ft_list_foreach(t_list *head, void (*f)(void	*))
{
	while (head)
	{
		(*f)(head->data);
		head = head->next;
	}
}

int	main()
{
	t_list	*head;
	head = (t_list *)malloc(sizeof(t_list));
	head->data = "1";
	head->next = NULL;

	t_list	*current;
	current = malloc(sizeof(t_list));
	current->data = "2";
	current->next = NULL;
	head->next = current;

	current = malloc(sizeof(t_list));
	current->data = "3";
	head->next->next = current;
	current->next = NULL;
	ft_list_foreach(head, print_list);
	int c = ft_list_size(head);
	printf("List size : %d \n", c);
	ft_list_remove_if(&head, "2", cmp);
	ft_list_foreach(head, print_list);
	int a = ft_list_size(head);
	printf("List size : %d \n", a);
	return(0);
}