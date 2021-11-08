/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:48:59 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/08 19:19:29 by akefeder         ###   ########.fr       */
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
	int	i;
	int tranche;
	int ecart;

	i = 0;
	ecart = ((a->len) / 5) + 1;
	tranche = 0;
	while (i < a->len && a->first != NULL)
	{
		tranche = ecart + tranche;
		if (tranche > a->len)
			tranche = a->len;
		while (i < tranche && a->first != NULL)
		{
			if (a->first->pos < tranche)
			{
				i++;
				push_b(a, b);
			}
			else
				rotate_a(a, OK);
		}	 
	}
}

void	classement(t_list *a, t_list *b)
{
	int i;
	int	j;
	t_member	*trot;

	i = a->len - 1;
	while (i >= 0 && b->first != NULL)
	{
		trot = b->first;
		j = 0;
		while (i != trot->pos)
		{
			j++;
			trot = trot->suiv;
		}
		if (j < (a->len)/2)
			rot(b, trot);
		else
			rrot(b, trot);
		push_a(a, b);
		i--;
	}
}

int	push_swap(t_list *a, t_list *b)
{
	if (croissant(a) == OK)
		return (OK);
	printf("la\n");	
	recherche(a, b);
	printf("la\n");
	classement(a, b);
	return (0);
}



