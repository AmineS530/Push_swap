/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:25:25 by asadik            #+#    #+#             */
/*   Updated: 2023/03/17 15:19:02 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	ft_make_stacks(t_kit *stuff)
{
	t_list *new;

	stuff->i = 1;
	stuff->a = ft_lstnew(stuff->mal[stuff->i]);
	printf ("\n A :|");
	while (++stuff->i < stuff->x)
	{
		new = ft_lstnew(stuff->mal[stuff->i]);
		new->position = stuff->i - 1;
		ft_lstadd_back(&stuff->a, new);
	}
	stuff->b = ft_lstnew(0);
	rotate_a(stuff->a);
	print_elements(stuff->a);
	printf ("\n B :|");
	print_elements(stuff->b);
	printf ("\n");
	print_pos(stuff->a);
}
