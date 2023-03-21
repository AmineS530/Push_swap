/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:31:31 by asadik            #+#    #+#             */
/*   Updated: 2023/03/21 12:26:07 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	stacka_to_b(t_kit *data)
{
	while (data->a->next)
	{
		if (data->a->position < data->i)
		{
			push_b(&data->a, &data->b);
			data->i++;
		}
		else if (data->a->position <= data->i + data->chunk_size)
		{
			push_b(&data->a, &data->b);
			rotate_b(&data->b);
			data->i++;
		}
		else
			rotate_a(&data->a);
	}
}

void	stackb_to_a(t_kit *data)
{
	while (data->b->next != NULL)
	{
		if (data->b->position == ft_lstsize(data->b) - 1)
			push_a(&data->a, &data->b);
		if (max_index(data->b) >= (ft_lstsize(data->b)) / 2)
			rev_rotate_b(&data->b);
		else if (max_index(data->b) <= (ft_lstsize(data->b)) / 2)
			rotate_b(&data->b);
	}
}

int	max_index(t_list *stack)
{
	t_list	*head;
	int		i;
	int		pos;
	int		max_index;

	head = stack;
	i = head->position;
	pos = 1;
	max_index = 1;
	while (head)
	{
		if (head->position > max_index)
		{
			max_index = pos;
			i = head->position;
		}
		head = head->next;
		pos++;
	}
	return (max_index);
}
