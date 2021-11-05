/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:48:59 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/05 18:21:41 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	croissant(t_list *list)
{
	int	verif;
	int	val;
	t_member	*trot;

	trot = list->first;
	val = trot->val;
	verif = OK;
	while (trot != NULL && verif == OK)
	{
		if (val > trot->val)
			verif = ERROR;
		val = trot->val;
		trot = trot->suiv;
	}
	return (verif);
}


int	push_swap(t_list *a, t_list *b)
{
	t_member	*temp;
	
	temp = b->first;
	while(croissant(a) != OK)
	{
		swap_a(a, OK);
		rotate_a(a, OK);
	}
	return (0);
}