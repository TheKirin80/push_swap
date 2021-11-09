/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shortsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:43:10 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/09 02:07:15 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list *a)
{
	if (a->last->pos == 2 && a->first->pos == 1)
		swap_a(a, OK);
	else if (a->first->suiv->pos == 1)
	{
		swap_a(a, OK);
		rrotate_a(a, OK);
	}
	else if (a->last->pos == 1 && a->first->pos == 2)
		rotate_a(a, OK);
	else if (a->last->pos == 1 && a->first->pos == 0)
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
}