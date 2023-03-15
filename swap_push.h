/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:17:09 by asadik            #+#    #+#             */
/*   Updated: 2023/03/15 07:59:42 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_PUSH_H
# define SWAP_PUSH_H

# include "Utils/libft/libft.h"
# define RED "\e[31m"
# define YELLOW "\e[33m"
# define GREEN "\e[32m"
# define CYAN "\e[36m"
# define DEFAULT "\033[0m"

typedef struct s_kit
{
	int		i;
	int		x;
	char	*joined;
	char	**nmiro;
	long	*mal;

}	t_kit;

// parsing.c
t_kit		apply_checks(char **argv);
void		get_numbers(t_kit *thing, char **argv);
void		check_for_digits(t_kit *thing);
void		convert_ncheck_dups(t_kit *nb);
void		check_minmax(t_kit *input);

// tools
int			better_ft_isdigit(char *nbr);

#endif
