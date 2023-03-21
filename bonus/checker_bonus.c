/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:22:39 by asadik            #+#    #+#             */
/*   Updated: 2023/03/21 20:58:08 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../swap_push.h"

int	main(int argc, char *argv[])
{
	t_kit	stack;
	char	*str;

	if (argc > 1)
	{
		stack = apply_checks(argv);
		ft_make_stacks(&stack);
		str = ft_strdup("");
		while (str != NULL)
		{
			if (str)
				free(str);
			str = get_next_line(0);
			if (str == NULL)
				break ;
			apply_input(str, &stack);
		}
		if (is_sorted(stack.a))
			ft_putstr_fd(GREEN"OK\n"DEFAULT, 1);
		else
			ft_putstr_fd(RED"KO\n"DEFAULT, 1);
		ft_lstclear(&stack.a);
		ft_lstclear(&stack.b);
	}
	return (0);
}

void	apply_input(char *str, t_kit *stack)
{
	if (ft_strlen(str) == 3)
		instructions_check(str, stack);
	else if (ft_strlen(str) == 4)
	{
		if (ft_strncmp(str, "rra\n", 5) == 0)
			rev_rotate_a(&stack->a);
		else if (ft_strncmp(str, "rrb\n", 5) == 0)
			rev_rotate_b(&stack->a);
		else if (ft_strncmp(str, "rrr\n", 5) == 0)
			rev_rotate_a_b(&stack->a, &stack->b);
		else
			the_error(stack);
	}
}

void	instructions_check(char *str, t_kit *stack)
{
	if (ft_strncmp(str, "sa\n", 4) == 0)
		swap_a(&stack->a);
	else if (ft_strncmp(str, "sb\n", 4) == 0)
		swap_b(&stack->b);
	else if (ft_strncmp(str, "ss\n", 4) == 0)
		swap_a_b(&stack->a, &stack->b);
	else if (ft_strncmp(str, "pa\n", 4) == 0)
		push_a(&stack->a, &stack->b);
	else if (ft_strncmp(str, "pb\n", 4) == 0)
		push_b(&stack->a, &stack->b);
	else if (ft_strncmp(str, "ra\n", 4) == 0)
		rotate_a(&stack->a);
	else if (ft_strncmp(str, "rb\n", 4) == 0)
		rotate_b(&stack->a);
	else if (ft_strncmp(str, "rr\n", 4) == 0)
		rotate_a_b(&stack->a, &stack->b);
	else
		the_error(stack);
}

void	the_error(t_kit	*stacks)
{
	ft_putstr_fd(RED"Error"DEFAULT, 2);
	ft_lstclear(&stacks->a);
	ft_lstclear(&stacks->b);
	exit (1);
}
