/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classement_bis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:07:27 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/09 21:41:27 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_member	*chercheur(t_list *list, int i)
{
	t_member	*save;

	save = list->first;
	while (i != save->pos)
		save = save->suiv;
	return (save);
}

void	init_list(t_list *list)
{
	list->first = NULL;
	list->last = NULL;
}
