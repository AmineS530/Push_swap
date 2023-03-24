/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:15:56 by asadik            #+#    #+#             */
/*   Updated: 2023/03/24 21:57:46 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

//! Remove the description of the error if its not allowed

t_kit	apply_checks(char **argv)
{
	t_kit		tool;

	tool.x = 0;
	get_numbers(&tool, argv);
	check_for_digits(&tool);
	convert_ncheck_dups(&tool);
	ft_free_split(&tool);
	check_minmax(&tool);
	return (tool);
}

void	get_numbers(t_kit *thing, char **argv)
{
	thing->i = 1;
	thing->joined = ft_strdup("");
	while (argv[thing->i])
	{
		check_arg(argv[thing->i]);
		thing->joined = ft_strjoin(thing->joined, " ", 69);
		thing->joined = ft_strjoin(thing->joined, argv[thing->i], 69);
		thing->i++;
	}
	thing->nmiro = ft_split(thing->joined, ' ');
	free (thing->joined);
	while (thing->nmiro[thing->x])
		thing->x++;
}

void	check_for_digits(t_kit *thing)
{
	thing->i = 0;
	while (thing->nmiro[thing->i])
	{
		if (!better_ft_isdigit(thing->nmiro[thing->i]))
		{
			ft_putstr_fd(RED "Error\nInvalid Characters" DEFAULT, 2);
			exit(EXIT_FAILURE);
		}
		thing->i++;
	}
	thing->mal = malloc(sizeof(long) * (thing->x + 1));
	if (!thing->mal)
		return ;
}

void	convert_ncheck_dups(t_kit *nb)
{
	static int	i;
	static int	j;
	int			k;

	while (nb->nmiro[i])
	{
		nb->mal[i] = ft_atoi(nb->nmiro[i]);
		i++;
	}
	while (j < nb->x)
	{
		k = 0;
		while (k < nb->x)
		{
			if (k != j && nb->mal[j] == nb->mal[k])
			{
				ft_putstr_fd(RED "Error\nDuplicate numbers" DEFAULT, 2);
				exit(2);
			}
			k++;
		}
		j++;
	}
}

void	check_minmax(t_kit *input)
{
	input->i = 0;
	while (input->i < input->x)
	{
		if (input->mal[input->i] > 2147483647)
		{
			ft_putstr_fd(RED"Error\nNumber bigger than INT_MAX"DEFAULT, 2);
			exit (1);
		}
		if (input->mal[input->i] < -2147483648)
		{
			ft_putstr_fd(RED"Error\nNumber smaller than INT_MIN"DEFAULT, 2);
			exit (1);
		}
		input->i++;
	}
}

// char *** argschad = [
// 	["140", "2", "3"],
// 	["4"],
// 	["5"]
// ]
// argschad[i]
// ./push_swap "1 2 3" 4 5
// all args are given to join
// result -> "1 2 3 4 5"
// then u split the result by space
