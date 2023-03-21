/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:25:25 by asadik            #+#    #+#             */
/*   Updated: 2023/03/21 10:58:51 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	ft_make_stacks(t_kit *stuff)
{
	t_list	*new;

	stuff->i = 0;
	stuff->a = ft_lstnew(stuff->mal[stuff->i]);
	while (++stuff->i < stuff->x)
	{
		new = ft_lstnew(stuff->mal[stuff->i]);
		ft_lstadd_back(&stuff->a, new);
	}
	stuff->b = NULL;
	stuff->i = 0;
	indexing(stuff);
}

void	ft_sort(t_kit *stuff)
{
	if (stuff->x <= 2)
		sort_two(&stuff->a);
	else if (stuff->x == 3)
		sort_three(&stuff->a);
	else if (stuff->x == 4)
		sort_four(stuff);
	else if (stuff->x == 5)
		sort_five(stuff);
	else if (stuff->x > 5)
		sort_bigger_than_five(stuff);
	// print_elements(stuff->a);
	// printf ("---- \n A \n");
	// print_elements(stuff->b);
	// printf ("---- \n B \n");
	// printf ("\n");
	// print_pos(stuff->a);
}
