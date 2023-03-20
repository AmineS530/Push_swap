/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:17:09 by asadik            #+#    #+#             */
/*   Updated: 2023/03/20 14:01:07 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_PUSH_H
# define SWAP_PUSH_H

# include "Utils/libft/libft.h"
# include <math.h>
# define RED "\e[31m"
# define YELLOW "\e[33m"
# define GREEN "\e[32m"
# define CYAN "\e[36m"
# define DEFAULT "\033[0m"

typedef struct s_kit
{
	int		i;
	int		x;
	int		chunk;
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
int			is_sorted(t_list *stack);
int			ft_sqrt(int nb);

// tools_2
void		indexing(t_kit *kit);
void		print_pos(t_list *head);
long		get_min(t_list *stack);
long		get_max(t_list *stack);

// stacks
void		ft_make_stacks(t_kit *stuff);
void		ft_sort(t_kit *stuff);

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

// sorting :D
void		sort_two(t_list **stack);
void		sort_three(t_list **stack);
void		sort_four(t_kit *data);
void		sort_five(t_kit *data);
void		sort_bigger_than_five(t_kit *data);

#endif
