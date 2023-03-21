/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:46:23 by asadik            #+#    #+#             */
/*   Updated: 2023/03/21 20:38:20 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	rev_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (!(*stack) || ft_lstsize(*stack) < 2)
		return ;
	end = ft_lstlast(*stack);
	tmp = lstbeforelast(*stack);
	tmp->next = NULL;
	end->next = (*stack);
	(*stack) = end;
}

void	rev_rotate_a(t_list **stack_a)
{
	rev_rotate(stack_a);
}

void	rev_rotate_b(t_list **stack_b)
{
	rev_rotate(stack_b);
}

void	rev_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
}
