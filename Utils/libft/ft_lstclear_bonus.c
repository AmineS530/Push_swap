/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:57:11 by asadik            #+#    #+#             */
/*   Updated: 2023/03/16 12:46:24 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = (*lst);
	while (lst && *lst)
	{
		if (tmp != NULL)
		{
			while (tmp != NULL)
			{
				tmp = (*lst)->next;
				free (*lst);
				*lst = tmp;
			}
		}
		else
			break ;
	}
	return ;
}
