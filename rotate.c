/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:28:33 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/08 12:23:23 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_a(t_list *list, int i)
{
	t_member	*first;
	t_member	*suiv;

	if ((list->first == NULL) || (list->first == list->last))
		return (0);
	first = list->first;
	suiv = list->first->suiv;
	first->prec = list->last;
	first->suiv = NULL;
	list->last->suiv = first;
	suiv->prec = NULL;
	list->first = suiv;
	list->last = first;
	if (i == OK)
		ft_putstr("ra\n");
	return (0);
}

int	rotate_b(t_list *list, int i)
{
	t_member	*first;
	t_member	*suiv;

	if ((list->first == NULL) || (list->first == list->last))
		return (0);
	first = list->first;
	suiv = list->first->suiv;
	first->prec = list->last;
	first->suiv = NULL;
	list->last->suiv = first;
	suiv->prec = NULL;
	list->first = suiv;
	list->last = first;
	if (i == OK)
		ft_putstr("rb\n");
	return (0);
}

int	rotate_r(t_list *a, t_list *b)
{
	rotate_a(a, ERROR);
	rotate_b(b, ERROR);
	ft_putstr("rr\n");
	return (0);
}

void	rot(t_list *list, t_member *trot)
{
	while (list->first != trot)
		rotate_a(list, OK);
}