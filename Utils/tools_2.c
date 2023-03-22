/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:27:52 by asadik            #+#    #+#             */
/*   Updated: 2023/03/22 12:33:40 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	indexing(t_kit *kit)
{
	static int	i;
	long		tmp;
	t_list		*head;

	kit->i = 0;
	head = kit->a;
	while (kit->i++ < kit->x)
	{
		head = kit->a;
		tmp = get_min(kit->a);
		while (head != NULL)
		{
			if (head->content == tmp && head->position == -1)
					head->position = i++;
			head = head->next;
		}
	}
}

/*void	print_pos(t_list *head)
{
	t_list	*current_node;

	current_node = head;
	while (current_node != NULL)
	{
		printf("%d|", current_node->position);
		current_node = current_node->next;
	}
}*/

long	get_min(t_list *stack)
{
	t_list		*head;
	long		min;

	head = stack;
	min = 2147483648;
	while (head != NULL)
	{
		if (min > head->content && head->position == -1)
				min = head->content;
		head = head->next;
	}
	if (min != 2147483648)
		return (min);
	return (head->content);
}

long	get_max(t_list *stack)
{
	t_list		*head;
	long		min;

	head = stack;
	min = -2147483649;
	while (head != NULL)
	{
		if (min < head->content)
				min = head->content;
		head = head->next;
	}
	if (min > -2147483649)
		return (min);
	return (head->content);
}
