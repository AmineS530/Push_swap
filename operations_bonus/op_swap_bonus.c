/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:39:05 by asadik            #+#    #+#             */
/*   Updated: 2023/03/21 20:38:39 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	swap(t_list **stack)
{
	t_list	*tmp;

	if (ft_lstsize(*stack) <= 1)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	tmp->next = (*stack);
	(*stack) = tmp;
}

void	swap_a(t_list **stack_a)
{
	swap(stack_a);
}

void	swap_b(t_list **stack_b)
{
	swap(stack_b);
}

void	swap_a_b(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
