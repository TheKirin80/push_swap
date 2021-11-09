/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akefeder <akefeder@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:34:01 by akefeder          #+#    #+#             */
/*   Updated: 2021/11/09 21:58:25 by akefeder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_chaine(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == ' ' || str[i] == '\0')
		return (ERROR);
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (ERROR);
		i++;
	}
	return (OK);
}

long	ft_atoi(char *str)
{
	int		i;
	long	signe;
	long	res;
	long	ret;

	i = 0;
	signe = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	ret = res * signe;
	return (ret);
}

void	ft_putstr_fd(char *s, int fd)
{
	int		len;

	if (s != NULL && fd >= 0)
	{
		len = ft_strlen(s);
		write(fd, s, len);
	}
}

void	ft_putstr(char *s)
{
	int		len;

	if (s != NULL)
	{
		len = ft_strlen(s);
		write(1, s, len);
	}
}

int	ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
