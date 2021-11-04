/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:28:07 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/04 19:09:48 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert(t_list *list, t_member *save)
{
	t_member	*pass;

	save->prec = NULL;
	save->suiv = NULL;
	if (list->first == NULL)
	{
		list->first = save;
		list->last = save;
	}
	else
	{
		pass = list->first;
		pass->prec = save;
		save->suiv = list->first;
		list->first = save;
	}
}

int	push_a(t_list *a, t_list *b)
{
	t_member	*save;

	if (b->first == NULL)
		return (0);
	save = b->first;
	if (b->first == b->last)
	{
		b->first = NULL;
		b->last = NULL;
	}
	else
	{
		b->first = b->first->suiv;
		b->first->prec = NULL;
	}
	insert(a, save);
	ft_putstr("pa\n");
	return (0);
}

int	push_b(t_list *a, t_list *b)
{
	t_member	*save;

	if (a->first == NULL)
		return (0);
	save = a->first;
	if (a->first == a->last)
	{
		a->first = NULL;
		a->last = NULL;
	}
	else
	{
		a->first = a->first->suiv;
		a->first->prec = NULL;
	}
	insert(b, save);
	ft_putstr("pb\n");
	return (0);
}
