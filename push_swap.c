/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:48:59 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/09 02:02:56 by akefeder         ###   ########.fr       */
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
	top_back_choice(b, chercheur(b), 'b');
	while (b->first != NULL)
	{
		push_a(a, b);
		rrotate_b(b, OK);
	}
}

void mv_in_tranche(t_list *list, int tranche)
{
	int	mtop;
	int mback;
	t_member	*trotback;
	t_member	*trottop;

	trotback = list->first;
	mtop = 0;
	mback = 1;
	while (trotback->pos >= tranche)
	{
		trotback = trotback->suiv;
		mtop++;
	}
	trottop = trotback;
	trotback = list->last;
	while (trotback->pos >= tranche)
	{
		trotback = trotback->prec;
		mback++;
	}
	if (mtop <= mback)
		rot('a', list, trottop);
	else
		rrot('a', list, trotback);
}

void	recherche(t_list *a, t_list *b)
{
	int	i;
	int tranche;
	int ecart;

	i = 0;
	ecart = ((a->len) / 5);
	tranche = 0;
	while (i < a->len && a->first != NULL)
	{
		tranche = ecart + tranche;
		if (tranche > a->len)
			tranche = a->len;
		while (i < tranche && a->first != NULL)
		{
			mv_in_tranche(a, tranche);
			i++;
			classement(a, b, 'b');
		}	 
	}
}

int	push_swap(t_list *a, t_list *b)
{
	if (croissant(a) == OK)
		return (OK);
	if (a->len == 2)
		swap_a(a, OK);
	else if (a->len == 3)
		sort_three(a);
	else if (a->len <= 5)
		sort_five(a, b);
	else
	{
		recherche(a, b);
		vidage(a, b);
	}
	
	

	
	return (0);
}



