/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:31:31 by asadik            #+#    #+#             */
/*   Updated: 2023/03/21 15:28:00 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

int	ft_sqrt(int nb)
{
	long	uwu;

	uwu = 1;
	if (uwu < 0)
		return (0);
	while ((uwu * uwu) < nb)
		uwu++;
	return (uwu);
}

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
		{
			if (is_rev_sorted(data->a) == 1)
				rev_rotate_a(&data->a);
			else
				rotate_a(&data->a);
		}
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
	int		moves_to_biggest;
	int		index_max;

	head = stack;
	i = head->position;
	moves_to_biggest = 1;
	index_max = 1;
	while (head)
	{
		if (head->position > i)
		{
			index_max = moves_to_biggest;
			i = head->position;
		}
		head = head->next;
		moves_to_biggest++;
	}
	return (index_max);
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
