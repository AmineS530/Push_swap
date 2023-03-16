/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:02:00 by asadik            #+#    #+#             */
/*   Updated: 2023/03/16 12:42:18 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

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

void print_elements(t_list *head)
{
	t_list *current_node = head;
	while (current_node != NULL)
	{
		printf("%ld|", current_node->content);
		current_node = current_node->next;
	}
}

void clear_list(t_list *head)
{
	t_list *current_node;

	while (head->next!= NULL)
	{
		current_node = head;
		current_node = current_node->next;
		free (current_node);
	}
}
