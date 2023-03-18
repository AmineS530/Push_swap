/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:43:37 by asadik            #+#    #+#             */
/*   Updated: 2023/03/18 11:33:56 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (empty_stack(*stack_b))
		return ;
	tmp = (*stack_b)->next;
	ft_lstadd_front(stack_a, (*stack_b));
	(*stack_a) = tmp;
	ft_putstr_fd(YELLOW"pa\n"DEFAULT, 1);
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (empty_stack(*stack_a))
		return;
	tmp = (*stack_a)->next;
	ft_lstadd_front(stack_b, (*stack_a));
	(*stack_b) = tmp;
	ft_putstr_fd(YELLOW"pb\n"DEFAULT, 1);
}

