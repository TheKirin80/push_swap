/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_bis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:46:05 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/08 11:54:49 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	length_list(t_list	*list)
{
	int	i;
	t_member	*trot;

	trot = list->first;
	i = 0;
	while (trot != NULL)
	{
		i++;
		trot = trot->suiv;
	}
	list->len = i;
}

