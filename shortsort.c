/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shortsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:43:10 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/09 21:49:34 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_three(t_list *a, int *max, int *min, int *inter)
{
	int	comp;

	comp = a->first->pos;
	if (comp > a->first->suiv->pos && comp > a->last->pos)
		*max = comp;
	else if (comp < a->first->suiv->pos && comp < a->last->pos)
		*min = comp;
	else
		*inter = comp;
	comp = a->first->suiv->pos;
	if (comp > a->first->pos && comp > a->last->pos)
		*max = comp;
	else if (comp < a->first->pos && comp < a->last->pos)
		*min = comp;
	else
		*inter = comp;
	comp = a->last->pos;
	if (comp > a->first->suiv->pos && comp > a->first->pos)
		*max = comp;
	else if (comp < a->first->suiv->pos && comp < a->first->pos)
		*min = comp;
	else
		*inter = comp;
}

void	sort_three(t_list *a)
{
	int	max;
	int	min;
	int	inter;

	set_three(a, &max, &min, &inter);
	if (a->last->pos == max && a->first->pos == inter)
		swap_a(a, OK);
	else if (a->first->suiv->pos == inter)
	{
		swap_a(a, OK);
		rrotate_a(a, OK);
	}
	else if (a->last->pos == inter && a->first->pos == max)
		rotate_a(a, OK);
	else if (a->last->pos == inter && a->first->pos == min)
	{
		swap_a(a, OK);
		rotate_a(a, OK);
	}
	else
		rrotate_a(a, OK);
}

void	sort_five(t_list *a, t_list *b)
{
	while (a->len > 3)
	{
		push_b(a, b);
		length_list(a);
	}
	if (croissant(a) == ERROR)
		sort_three(a);
	if (croissant(b) == ERROR)
		swap_b(b, OK);
	while (b->first != NULL)
		classement(b, a, 'a');
	top_back_choice(a, chercheur(a, 0), 'a');
}
