/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:12:30 by asadik            #+#    #+#             */
/*   Updated: 2023/03/19 09:56:42 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	sort_two(t_list **stack, int flag)
{
	if (ft_lstsize(*stack) <= 1)
		return;
	if (!is_sorted(*stack) && ft_lstsize(*stack) == 2)
	{
		if (flag == 69)
			swap_a(stack);
		else
			swap_b(stack);
	}
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

void	sort_four(t_list **stack)
{
	t_list	*head;

	head = (*stack);
	while (head->position != 0 && head != NULL)
		head = head->next;
		

}
