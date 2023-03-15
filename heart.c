/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heart.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 09:32:16 by asadik            #+#    #+#             */
/*   Updated: 2023/03/15 07:58:42 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap_push.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
		exit(1);
	else
	{
		printf("%sHello World!%s", YELLOW, DEFAULT);
		apply_checks(argv);
	}
	return (69);
}
