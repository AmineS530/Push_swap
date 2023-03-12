/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:15:56 by asadik            #+#    #+#             */
/*   Updated: 2023/03/12 18:45:58 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

t_tools	apply_checks(char **argv)
{
	t_tools	tool;

	tool.i = -1;
	tool.x = 0;
	get_numbers(&tool, argv);
	check_for_digits(&tool);
	convert_ncheck_dups(&tool);
	return (tool);
}

void	get_numbers(t_tools *thing, char **argv)
{
	thing->joined = ft_strdup(" ");
	while (argv[++thing->i])
	{
		thing->joined = ft_strjoin(thing->joined, " ", 69);
		thing->joined = ft_strjoin(thing->joined, argv[thing->i], 1);
	}
	thing->nmiro = ft_split(thing->joined, ' ');
	while (thing->nmiro[thing->x])
		thing->x++;
}

void	check_for_digits(t_tools *thing)
{
	int	j;

	thing->i = 0;
	while (thing->nmiro[++thing->i])
	{
		j = 0;
		while (thing->nmiro[thing->i][j])
		{
			if (!ft_isdigit(thing->nmiro[thing->i][j]))
			{
				printf("found this shit %c\n", thing->nmiro[thing->i][j]);
				ft_putstr_fd(RED "Error\nInvalid Characters" DEFAULT, 2);
				exit(EXIT_FAILURE);
			}
			j++;
		}
	}
}

void	convert_ncheck_dups(t_tools *nb)
{
	static int	i;
	static int	j;
	int			k;

	nb->mal = malloc(sizeof(int) * (nb->x + 1));
	while (nb->nmiro[i])
	{
		nb->mal[i] = ft_atoi(nb->nmiro[i]);
		i++;
	}
	while (++j < nb->x)
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
		ft_printf("%d\n", nb->mal[j]);
		system("leaks push_swap");
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
