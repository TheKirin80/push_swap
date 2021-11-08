/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:48:59 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/08 14:26:15 by akefeder         ###   ########.fr       */
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

void	vidage(t_list *a, t_list *b)
{
	while (b->first != NULL)
		push_a(a, b);
}

void	recherche(t_list *a, t_list *b)
{
	int	j;
	int	trancheb;
	int tranchea;
	t_member	*trot;

	tranche = ((a->len) / 5) + 1;
	while (i < a->len && a->first != NULL)
	{
		trot = a->first;
		j = 0;

		while (i != trot->pos)
		{
			j++;
			trot = trot->suiv;
		}
		if (j < (a->len)/2)
			rot(a, trot);
		else
			rrot(a, trot);
		push_b(a, b);
		i++;
	}
}

int	push_swap(t_list *a, t_list *b)
{
	if (croissant(a) == OK)
		return (OK);
	recherche(a, b);
	vidage(a, b);
	return (0);
}


