/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:17:09 by asadik            #+#    #+#             */
/*   Updated: 2023/03/12 18:22:54 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_PUSH_H
# define SWAP_PUSH_H

# include "Utils/libft/libft.h"
# include "Utils/ft_printf/ft_printf.h"
# define RED "\e[31m"
# define YELLOW "\e[33m"
# define GREEN "\e[32m"
# define CYAN "\e[36m"
# define DEFAULT "\033[0m"


typedef	struct s_tools
{
	int		i;
	int		x;
	char	*joined;
	char	**nmiro;
	int		*mal;

}	t_tools;


// parsing.c
t_tools		apply_checks(char **argv);
void		get_numbers(t_tools *thing, char **argv);
void		check_for_digits(t_tools *thing);
void		convert_ncheck_dups(t_tools *nb);


#endif
