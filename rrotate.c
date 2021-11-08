/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:05:22 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/08 12:21:24 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rrotate_a(t_list *list, int i)
{
	t_member	*last;
	t_member	*prec;

	if ((list->first == NULL) || (list->first == list->last))
		return (0);
	last = list->last;
	prec = list->last->prec;
	last->suiv = list->first;
	last->prec = NULL;
	list->first->prec = last;
	prec->suiv = NULL;
	list->last = prec;
	list->first = last;
	if (i == OK)
		ft_putstr("rra\n");
	return (0);
}

int	rrotate_b(t_list *list, int i)
{
	t_member	*last;
	t_member	*prec;

	if ((list->first == NULL) || (list->first == list->last))
		return (0);
	last = list->last;
	prec = list->last->prec;
	last->suiv = list->first;
	last->prec = NULL;
	list->first->prec = last;
	prec->suiv = NULL;
	list->last = prec;
	list->first = last;
	if (i == OK)
		ft_putstr("rrb\n");
	return (0);
}

int	rrotate_r(t_list *a, t_list *b)
{
	rrotate_a(a, ERROR);
	rrotate_b(b, ERROR);
	ft_putstr("rrr\n");
	return (0);
}

void	rrot(t_list *list, t_member *trot)
{
	while (list->first != trot)
		rrotate_a(list, OK);
}