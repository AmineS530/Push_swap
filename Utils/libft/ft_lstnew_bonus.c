/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:26:13 by asadik            #+#    #+#             */
/*   Updated: 2023/03/20 18:32:53 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(long content)
{
	t_list	*poggers;

	poggers = malloc(sizeof(t_list));
	if (!poggers)
		return (NULL);
	poggers->content = content;
	poggers->position = -1;
	poggers->next = NULL;
	return (poggers);
}
