/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:12:30 by asadik            #+#    #+#             */
/*   Updated: 2023/03/20 16:47:43 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	sort_two(t_list **stack)
{
	if (ft_lstsize(*stack) <= 1)
		return ;
	if (!is_sorted(*stack) && ft_lstsize(*stack) == 2)
		swap_a(stack);
}

void	sort_three(t_list **stack)
{
	long	max;

	max = get_max((*stack));
	if ((*stack)->content == max)
		rotate_a(stack);
	else if ((*stack)->next->content == max)
		rev_rotate_a(stack);
	if ((*stack)->content > (*stack)->next->content)
		swap_a(stack);
}

void	sort_four(t_kit *data)
{
	if (!is_sorted(data->a))
	{
		while (data->a->position < data->x && data->a->position != 0)
			rotate_a(&data->a);
		while (data->a->position >= data->x && data->a->position != 0)
			rev_rotate_a(&data->a);
		push_b(&data->a, &data->b);
		sort_three(&data->a);
		push_a(&data->a, &data->b);
	}
}

void	sort_five(t_kit *data)
{
	if (!is_sorted(data->a))
	{
		while (data->a->position < data->x && data->a->position != 0)
			rotate_a(&data->a);
		while (data->a->position >= data->x && data->a->position != 0)
			rev_rotate_a(&data->a);
		push_b(&data->a, &data->b);
		while (data->a->position != 1)
		{
			if (data->a->position > data->x)
				rev_rotate_a(&data->a);
			else
				rotate_a(&data->a);
		}
		push_b(&data->a, &data->b);
		sort_three(&data->a);
		push_a(&data->a, &data->b);
		push_a(&data->a, &data->b);
	}
}

void	sort_bigger_than_five(t_kit *data)
{
	static	int	i;
	int			uwu;
	int			chunk_size;
	int			half_chunk;

	data->i = 0;
	uwu = ((ft_sqrt(data->x) / 2) - 1);
	chunk_size = (data->x / uwu) + (data->x % uwu);
	data->chunk = chunk_size;
	//printf("\n chunk size %d\n number of chunks %d\n", chunk_size, uwu);
	half_chunk = data->chunk / 2;
	while (data->a->next)
	{
		if (data->chunk == ft_lstsize(data->b))
		{
			data->chunk += chunk_size;
			half_chunk = data->chunk / 2;
		}
		if (data->a->position <= half_chunk)
			rotate_a(&data->a);
		else if (data->a->position > half_chunk)
			rev_rotate_a(&data->a);
		if (data->a->position < data->chunk)
		{
			data->a->order = i++;
			push_b(&data->a, &data->b);
		}
		// if (data->a->position > data->chunk - half_chunk)
		// 	rotate_b(&data->b);
	}
	push_b(&data->a, &data->b);

	while (data->b->next != NULL)
	{
		if (data->b->position == data->x - 1)
		{
			push_a(&data->a, &data->b);
			data->x--;
		}
		if (data->b->position <= data->x)
			rev_rotate_b(&data->b);
		else if (data->b->position < data->x)
			rotate_b(&data->b);
		// && data->b->order < half_chunk)
	}
	push_a(&data->a, &data->b);
}
