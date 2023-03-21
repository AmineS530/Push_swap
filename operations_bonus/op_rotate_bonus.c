/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:58:15 by asadik            #+#    #+#             */
/*   Updated: 2023/03/21 20:38:30 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*head;

	if (!(*stack) || ft_lstsize(*stack) < 2)
		return ;
	head = (*stack);
	tmp = ft_lstlast((*stack));
	tmp->next = (*stack);
	(*stack) = (*stack)->next;
	head->next = NULL;
}

void	rotate_a(t_list **stack_a)
{
	rotate(stack_a);
}

void	rotate_b(t_list **stack_b)
{
	rotate(stack_b);
}

void	rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
