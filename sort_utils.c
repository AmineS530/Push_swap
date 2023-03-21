/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:31:31 by asadik            #+#    #+#             */
/*   Updated: 2023/03/21 11:30:04 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

void	stacka_to_b(t_kit *data)
{
	while(data->a)
	{
		if (data->a->position < data->i)
		{
			push_b(&data->a, &data->b);
			data->i++;
		}
		if (data->a->position < data->i + data->chunk_size)
		{
			push_b(&data->a , &data->b);
			rotate_b(&data->b);
			data->i++;
		}
		else
			rev_rotate_a(&data->a);
	}
}
