/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:46:23 by asadik            #+#    #+#             */
/*   Updated: 2023/03/18 17:08:23 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	rev_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	end = ft_lstlast(*stack);
	tmp = lstbeforelast(*stack);
	tmp->next = NULL;
	end->next = (*stack);
	(*stack)= end;
}

void	rev_rotate_a(t_list **stack_a)
{
	rev_rotate(stack_a);
	ft_putstr_fd(YELLOW"rra\n"DEFAULT, 1);
}

void	rev_rotate_b(t_list **stack_b)
{
	rev_rotate(stack_b);
	ft_putstr_fd(YELLOW"rrb\n"DEFAULT, 1);
}

void	rev_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_putstr_fd(YELLOW"rrr\n"DEFAULT, 1);
}

