/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heart.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:32:16 by asadik            #+#    #+#             */
/*   Updated: 2023/03/24 21:58:02 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	check(void)
{
	system("leaks push_swap");
}

int	main(int argc, char *argv[])
{
	t_kit	stuff;

	if (argc == 1)
		exit(1);
	else
	{
		stuff = apply_checks(argv);
		ft_make_stacks(&stuff);
		ft_sort(&stuff);
		ft_lstclear(&stuff.a);
		ft_lstclear(&stuff.b);
	}
	return (0);
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
		sort_big(stuff);
}
