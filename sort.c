/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:12:30 by asadik            #+#    #+#             */
/*   Updated: 2023/03/20 19:33:12 by asadik           ###   ########.fr       */
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
	int			uwu;
	int			chunk_size;

	data->i = 0;
	uwu = ((ft_sqrt(data->x) / 2));
	if (uwu == 0)
		chunk_size = (ft_lstsize(data->a));
	else
		chunk_size = (ft_lstsize(data->a) / uwu) + (data->x % uwu);
	printf("\n chunk size %d\n number of chunks %d\n", chunk_size, uwu);
	while(data->a != NULL)
	{
		if (data->a->position <= data->i)
		{
			push_b(&data->a, &data->b);
			data->i++;
		}
		if (data->a->position < chunk_size)
		{
			push_b(&data->a , &data->b);
			rotate_b(&data->b);
			data->i++;
		}
		else
			rotate_a(&data->a);
	}
//	push_b(&data->a , &data->b);
	// while (data->b != NULL)
	// {
	// 	if (data->b->position == max_index(data->b))
	// 		push_a(&data->a, &data->b);
	// 	if (max_index(data->b) >= ft_lstsize(data->b) / 2)
	// 		rev_rotate_b(&data->b);
	// 	else if (max_index(data->b) <= ft_lstsize(data->b) / 2)
	// 		rotate_b(&data->b);
	// }
	// push_a(&data->a, &data->b);
}
