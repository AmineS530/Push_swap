/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:39:05 by asadik            #+#    #+#             */
/*   Updated: 2023/03/17 14:35:05 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	swap(t_list *stack)
{
	t_list	*tmp;
	long	data_tmp;
	long	pos_tmp;

	if (empty_stack(stack))
		return ;
	tmp = stack;
	stack = stack->next;
	data_tmp = tmp->content;
	pos_tmp = tmp->position;
	tmp->content = stack->content;
	tmp->position = stack->position;
	stack->content = data_tmp;
	stack->position = pos_tmp;
}

void	swap_a(t_list *stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_list *stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	swap_a_b(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}


