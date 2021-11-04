/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:45:18 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/04 15:00:58 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	gest_error(t_list *a, t_list *b)
{
	libere(a);
	libere(b);
	ft_putstr("ERROR");
	return (0);
}

int	libere(t_list *list)
{
	t_member	*a_free;
	t_member	*suiv;

	if (!(list->first))
		return (OK);
	else if (list->first == list->last)
		free(list->first);
	else
	{
		a_free = list->first;
		while (!(a_free))
		{
			suiv = a_free->suiv;
			free(a_free);
			a_free = suiv;
		}
	}
	list->first = NULL;
	list->last = NULL;
	return (OK);
}
