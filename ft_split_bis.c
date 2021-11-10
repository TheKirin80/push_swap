/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:23:33 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/10 14:32:29 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ite_rempli(int *c)
{
	c[0] = -1;
	c[1] = 0;
	c[2] = -1;
	c[3] = -1;
}

void	ite_while(int *ite, const char *s, char **split, char sep)
{
	split[++(ite[2])] = (char *)malloc((ite[1] + 5) * sizeof(char));
	ite[1] = ite[0] - ite[1] - 1;
	while (++(ite[1]) < ite[0])
	{
		if (ft_test(s[ite[1]], sep) == 0)
			split[ite[2]][++(ite[3])] = s[ite[1]];
		else
			split[ite[2]][++(ite[3])] = 0;
	}
	ite[1] = 0;
	if (s[ite[0] + 1] == '\0')
	{
		if (ft_test(s[ite[0]], sep) == 0)
			split[ite[2]][++(ite[3])] = s[ite[0]];
		else
			split[ite[2]][++(ite[3])] = 0;
	}
	split[ite[2]][++(ite[3])] = '\0';
}

int	ft_remplissage(const char *s, char **split, char sep)
{
	int		*ite;
	int		ret;

	ite = malloc(4 * sizeof(int));
	ite_rempli(ite);
	while (s[++(ite[0])] != '\0')
	{
		ite[3] = -1;
		if ((ft_test(s[ite[0]], sep) == 1 && ite[1] > 0)
			|| s[ite[0] + 1] == '\0')
		{
			ite_while(ite, s, split, sep);
		}
		else
		{
			if (ft_test(s[ite[0]], sep) == 0)
				(ite[1])++;
			else
				ite[1] = 0;
		}
	}
	ret = ite[2];
	free(ite);
	return (ret);
}
