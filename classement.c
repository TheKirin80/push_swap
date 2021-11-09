/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classement.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:04:01 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/09 02:18:22 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_member*	is_bigger(t_list *list, t_member *ref, t_member *trot)
{
	int	val;
	t_member	*save;

	val = OK;
	save = list->first;
	while (save != NULL)
	{	
		if (save->pos > ref->pos)
			val = ERROR;
		if (save->pos < trot->pos)
			trot = save;
		save = save->suiv;
	}
	if (val == ERROR)
		trot = NULL;
	return (trot);
}

void	top_back_choice(t_list *list, t_member *memb, char c)
{
	int	j;
	t_member	*trot;

	j = 0;
	trot = list->first;
	printf("\nje suis avant le while\n");
	while (memb->pos != trot->pos)
	{
		j++;
		trot = trot->suiv;
	}
	printf("\nje suis apres le while\n");
	length_list(list);
	printf("\nje suis apres la len\n");
	if (j < (list->len)/2)
		rot(c, list, trot);
	else
		rrot(c, list, trot);
}

t_member* is_just_smallest(t_list *list, t_member *ref, t_member *trot)
{
	t_member	*save;
	t_member	*smallest;
	
	save = list->first;
	smallest = NULL;
	while (save != NULL)
	{
		if (save->pos < ref->pos)
		{
			if (smallest != NULL)
			{
				if (save->pos > smallest->pos)
					smallest = save;
			}
			else
				smallest = save;
		}
		save = save->suiv;
	}
	trot = smallest;
	return (trot);
}

t_member*	chercheur(t_list *list)
{
	t_member	*save;

	save = list->first;
	while ((list->len) != save->pos)
		save = save->suiv;
	return (save); 
}

void	classement(t_list *a, t_list *b, char c)
{
	t_member	*trot;

	if (b->first != NULL)
	{
		trot = is_bigger(b, a->first, b->first);
		if (trot)
			top_back_choice(b, trot, c);
		else 
		{
			trot = is_just_smallest(b, a->first, trot);
			top_back_choice(b, trot, c);
		}
	}
	if (c == 'a')
		push_a(a, b);
	else
		push_b(a, b);
}
