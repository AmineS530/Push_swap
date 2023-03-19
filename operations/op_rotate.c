/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:58:15 by asadik            #+#    #+#             */
/*   Updated: 2023/03/19 11:18:26 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*head;

	head = (*stack);
	tmp = ft_lstlast((*stack));
	tmp->next = (*stack);
	(*stack) = (*stack)->next;
	head->next = NULL;
}

void	rotate_a(t_list **stack_a)
{
	if (!(*stack_a))
		return ;
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_list **stack_b)
{
	if (!(*stack_b))
		return ;
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}
