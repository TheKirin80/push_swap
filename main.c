/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:45:55 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/09 22:06:56 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list		a;
	t_list		b;

	if ((ac == 1) || (ac == 2 && av[1][0] == 0))
		exit(0);
	init_list(&b);
	if (rempli_list(&a, av, ac) == ERROR || test_list(&a) == ERROR)
		return (gest_error(&a, &b));
	push_swap(&a, &b);
	libere(&a);
	libere(&b);
	return (0);
}
