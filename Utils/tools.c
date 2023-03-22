/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:02:00 by asadik            #+#    #+#             */
/*   Updated: 2023/03/22 16:13:06 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

int	better_ft_isdigit(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (ft_isdigit(nbr[i + 1]))
			return (1);
		else
			return (0);
	}
	return (ft_isdigit(nbr[i]));
}

/*void	print_elements(t_list *head)
{
	t_list	*current_node;

	current_node = head;
	while (current_node != NULL)
	{
		printf("%ld \n", current_node->content);
		current_node = current_node->next;
	}
}*/

t_list	*lstbeforelast(t_list *lst)
{
	while (lst->next && lst->next->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	is_sorted(t_list *stack)
{
	t_list	*head;
	int		i;

	head = stack;
	i = 0;
	while (head != NULL && head->next != NULL)
	{
		if (head->position > head->next->position)
			return (0);
		head = head->next;
	}
	return (1);
}

int	is_rev_sorted(t_list *stack)
{
	t_list	*head;
	int		i;

	head = stack;
	i = 0;
	while (head != NULL && head->next != NULL)
	{
		if (head->position < head->next->position)
			return (0);
		head = head->next;
	}
	return (1);
}
