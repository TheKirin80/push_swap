/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:28:55 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/10 14:31:31 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_test(char sep, char c)
{
	if (sep == c)
		return (1);
	return (0);
}

int	ft_size(const char *s, char c)
{
	int		i;
	int		size;

	i = 0;
	size = 1;
	while (s[i] != '\0')
	{
		if (ft_test(s[i], c) == 1 && i > 0
			&& ft_test(s[i - 1], c) == 0 && s[i + 1] != '\0')
			size++;
		i++;
	}
	return (size);
}

int	ft_verif_arg(const char *s, char c)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (0);
	if (s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (ft_test(s[i], c) == 0)
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		x;

	if (ft_verif_arg(s, c) == 0)
	{
		split = (char **)malloc(1 * sizeof(char *));
		split[0] = 0;
		return (split);
	}
	split = (char **)malloc((ft_size(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	x = ft_remplissage(s, split, c);
	if (split[x][0] != '\0')
		split[x + 1] = 0;
	else
		split[x] = 0;
	return (split);
}
