/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:25:25 by asadik            #+#    #+#             */
/*   Updated: 2023/03/19 09:56:33 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	ft_make_stacks(t_kit *stuff)
{
	t_list	*new;
	t_list	*head;

	stuff->i = 0;
	stuff->a = ft_lstnew(stuff->mal[stuff->i]);
	head = stuff->a;
	while (++stuff->i < stuff->x)
	{
		new = ft_lstnew(stuff->mal[stuff->i]);
		ft_lstadd_back(&stuff->a, new);
	}
	stuff->b = NULL;
	stuff->i = 0;
	indexing(stuff);
	sort_three(&stuff->a);
	print_elements(stuff->a);
	printf ("---- \n A \n");
	// print_elements(stuff->b);
	// printf ("---- \n B \n");
	printf ("\n");
	print_pos(stuff->a);
}
