/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:45:55 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/04 15:02:48 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_list		a;
	t_list		b;

	init_list(&b);
	if (rempli_list(&a, av) == ERROR)
	{
		gest_error(&a, &b);
		return (0);
	}
	

	push_swap 


	return (0);
}