/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:31:39 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/04 19:54:16 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_a(t_list *a, int i)
{
	t_member	*un;
	t_member	*deux;
	t_member	*trois;

	if ((!(a->first)) || (a->first == a->last))
		return (0);
	un = a->first;
	deux = a->first->suiv;
	trois = deux->suiv;
	un->prec = deux;
	deux->suiv = un;
	un->suiv = trois;
	deux->prec = NULL;
	trois->prec = un;
	a->first = deux;
	if (i == OK)
		ft_putstr("sa\n");
	return (0);
}

int	swap_b(t_list *b, int i)
{
	t_member	*un;
	t_member	*deux;
	t_member	*trois;

	if ((!(b->first)) || (b->first == b->last))
		return (0);
	un = b->first;
	deux = b->first->suiv;
	trois = deux->suiv;
	un->prec = deux;
	deux->suiv = un;
	un->suiv = trois;
	deux->prec = NULL;
	trois->prec = un;
	b->first = deux;
	if (i == OK)
		ft_putstr("sb\n");
	return (0);
}

int	swap_s(t_list *a, t_list *b)
{
	swap_a(a, ERROR);
	swap_b(b, ERROR);
	ft_putstr("ss\n");
	return (0);
}
