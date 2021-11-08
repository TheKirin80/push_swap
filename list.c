/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:44:18 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/08 12:00:50 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_list(t_list *list)
{
	list->first = NULL;
	list->last = NULL;
}

int	add_element(t_list *list, int add)
{
	t_member	*new;

	new = malloc(sizeof(t_member));
	if (!(new))
		return (ERROR);
	new->val = add;
	new->suiv = NULL;
	new->prec = list->last;
	if (list->last)
		list->last->suiv = new;
	else
		list->first = new;
	list->last = new;
	return (OK);
}

int	rempli_list(t_list *list, char **av)
{
	int		i;
	long	testres;
	int		res;

	i = 1;
	init_list(list);
	if (!(av[1]))
		return (ERROR);
	while (av[i] != NULL)
	{
		if ((test_chaine(av[i])) == ERROR)
			return (ERROR);
		testres = ft_atoi(av[i]);
		if (testres < INT_MIN || testres > INT_MAX)
			return (ERROR);
		res = testres;
		if (add_element(list, res) == ERROR)
			return (ERROR);
		i++;
	}
	position(list);
	return (OK);
}

int	test_list(t_list *list)
{
	int	save;
	t_member	*trot;
	t_member	*verif;
	int	dupli;

	dupli = OK;
	trot = list->first;
	while (trot != NULL)
	{
		save = trot->val;
		verif = trot->suiv;
		while (verif != NULL)
		{
			if (verif->val == save)
				dupli = ERROR;
			verif = verif->suiv;
		}
		if (dupli == ERROR)
			trot = NULL;
		else
			trot = trot->suiv;
	}
	return (dupli);
}

void position(t_list *list)
{
	int	pos;
	t_member	*trot;
	t_member	*mbpos;

	mbpos = list->first;
	length_list(list);
	while (mbpos != NULL)
	{
		pos = 1;
		trot = list->first;
		while (trot != NULL)
		{
			if (mbpos->val < trot->val) 
				pos++;
			trot = trot->suiv;
		}
		mbpos->pos = list->len - pos;
		mbpos = mbpos->suiv;	
	}
}