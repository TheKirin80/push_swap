/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:44:18 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/04 15:01:35 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		init_list(*t_list list)
{
	list->first = NULL;
	list->last = NULL;
}

int			rempli_list(t_list *list, char **av)
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
		res = testres
		if (add_element(list, res) == ERROR)
			return (ERROR);
		i++;
	}
	return (OK);
}

int			add_element(t_list *list, int add)
{
	t_member	new;
	if (!(new = malloc(sizeof(t_member))))
		return(ERROR);
	new->val = add;
	new->suiv = list->first;
	new->prec = NULL;
	if (list->first)
		list->first->prec = new;
	else
		list->last = new;
	list->first = new;
	return (OK);
}

