/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:46:23 by asadik            #+#    #+#             */
/*   Updated: 2023/03/17 18:46:25 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

void	rev_rotate(t_list *stack)
{
	t_list	*tmp;
	tmp = ft_lstlast(stack);
	stack = tmp;
	stack->next = NULL;
}

void	rev_rotate_a()
{
	ft_putstr_fd("rra\n", 1);
}

void	rev_rotate_b()
{
	ft_putstr_fd("rrb\n", 1);
}

void	rev_rotate_a_b()
{
	ft_putstr_fd("rrr\n", 1);
}

