/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:17:09 by asadik            #+#    #+#             */
/*   Updated: 2023/03/18 22:01:29 by asadik           ###   ########.fr       */
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
	t_list	*a;
	t_list	*b;

}	t_kit;
// parsing
t_kit		apply_checks(char **argv);
void		get_numbers(t_kit *thing, char **argv);
void		check_for_digits(t_kit *thing);
void		convert_ncheck_dups(t_kit *nb);
void		check_minmax(t_kit *input);
// parsing_2
void		check_arg(char *arg);

// tools
int			better_ft_isdigit(char *nbr);
void		print_elements(t_list *head);
t_list		*lstbeforelast(t_list *lst);
void		print_pos(t_list *head);
// tools_2
void		indexing(t_kit *kit);
long		get_min(t_list *stack);

// stacks
void		ft_make_stacks(t_kit *stuff);

// operations
void		swap(t_list **stack);
void		swap_a(t_list **stack_a);
void		swap_b(t_list **stack_b);
void		swap_a_b(t_list **stack_a, t_list **stack_b);
void		push_a(t_list **stack_a, t_list **stack_b);
void		push_b(t_list **stack_a, t_list **stack_b);
void		rotate(t_list **stack);
void		rotate_a(t_list **stack_a);
void		rotate_b(t_list **stack_b);
void		rotate_a_b(t_list **stack_a, t_list **stack_b);
void		rev_rotate(t_list **stack);
void		rev_rotate_a(t_list **stack_a);
void		rev_rotate_b(t_list **stack_b);
void		rev_rotate_a_b(t_list **stack_a, t_list **stack_b);

#endif
