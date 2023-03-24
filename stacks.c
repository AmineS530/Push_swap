/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:25:25 by asadik            #+#    #+#             */
/*   Updated: 2023/03/24 20:01:46 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	ft_make_stacks(t_kit *stuff)
{
	t_list	*new;

	stuff->i = 0;
	stuff->a = ft_lstnew(stuff->mal[stuff->i]);
	stuff->a->order = stuff->i;
	while (++stuff->i < stuff->x)
	{
		new = ft_lstnew(stuff->mal[stuff->i]);
		new->order = stuff->i;
		ft_lstadd_back(&stuff->a, new);
	}
	free(stuff->mal);
	stuff->b = NULL;
	stuff->i = 0;
	indexing(stuff);
}
