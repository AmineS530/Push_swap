/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heart.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:32:16 by asadik            #+#    #+#             */
/*   Updated: 2023/03/16 12:57:28 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

int	main(int argc, char *argv[])
{
	t_kit	stuff;
	if (argc == 1)
		exit(1);
	else
	{
		stuff = apply_checks(argv);
		ft_make_stacks(&stuff);
		ft_lstclear(&stuff.a);
		ft_lstclear(&stuff.b);
	//	system("leaks push_swap");
	}
	return (69);
}
