/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:02:00 by asadik            #+#    #+#             */
/*   Updated: 2023/03/14 11:02:46 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

int	better_ft_isdigit(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (ft_isdigit(nbr[i + 1]))
			return (1);
		else
			return (0);
	}
	return (ft_isdigit(nbr[i]));
}
