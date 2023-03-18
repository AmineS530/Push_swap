/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:09:44 by asadik            #+#    #+#             */
/*   Updated: 2023/03/18 17:10:29 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	check_arg(char *arg)
{
	int	i;

	i = 0;
	if (ft_strlen(arg) == 0)
	{
		ft_putstr_fd(RED"Error\nEmpty String", 2);
		exit(1);
	}
	while (arg[i])
	{
		if (arg[i] != ' ')
			return ;
		i++;
	}
	ft_putstr_fd(RED"Error\nConsective spaces", 2);
	exit (1);
}
