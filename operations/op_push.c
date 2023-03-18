/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:43:37 by asadik            #+#    #+#             */
/*   Updated: 2023/03/18 22:02:18 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	push(t_list **first_s, t_list **second_s)
{
	t_list	*tmp;

	tmp = *first_s;
	*first_s = ((*first_s)->next);
	tmp->next = (*second_s);
	(*second_s) = tmp;
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	if (!(*stack_a) || !(*stack_b))
		return ;
	push(stack_b, stack_a);
	ft_putstr_fd(YELLOW"pb\n"DEFAULT, 1);
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!(*stack_b))
	{
		tmp = (*stack_a);
		(*stack_b) = ft_lstnew((*stack_a)->content);
		(*stack_a) = (*stack_a)->next;
		ft_lstdelone(tmp);
	}
	else if ((*stack_b))
		push(stack_a, stack_b);
	ft_putstr_fd(YELLOW"pa\n"DEFAULT, 1);
}
