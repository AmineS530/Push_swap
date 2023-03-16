/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:25:25 by asadik            #+#    #+#             */
/*   Updated: 2023/03/16 12:56:06 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	ft_make_stacks(t_kit *stuff)
{
	t_list *new;

	stuff->i = 1;
	stuff->a = ft_lstnew(stuff->mal[stuff->i]);
	printf ("\n A :|");
	while (++stuff->i <= (stuff->x / 2))
	{
		new = ft_lstnew(stuff->mal[stuff->i]);
		ft_lstadd_back(&stuff->a, new);
	}
	print_elements(stuff->a);
	printf ("\n B :|");
	stuff->b = ft_lstnew(stuff->mal[stuff->i]);
	while (++stuff->i < stuff->x)
	{
		new = ft_lstnew(stuff->mal[stuff->i]);
		ft_lstadd_back(&stuff->b, new);
	}
	print_elements(stuff->b);
}
