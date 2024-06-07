/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:51 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:52 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1[0] == '+' || s1[0] == 48)
	{
		j++;
		while (s1[j] == 48 && s1[j + 1] != '\0')
			j++;
	}
	if (s2[0] == '+' || s2[0] == 48)
	{
		i++;
		while (s1[i] == 48 && s2[i + 1] != '\0')
			i++;
	}
	while (s1[j] == s2[i] && s1[j] != '\0' && s2[i] != '\0')
	{
		j++;
		i++;
	}
	return (s1[j] - s2[i]);
}

long	ft_atoi(const char *str)
{
	long	res;
	char	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

int	*ft_realloc(int	*arr, int size, int j)
{
	int	*tab;
	int	i;

	i = -1;
	tab = malloc(size * sizeof(int));
	if (j == 1)
	{
		i = -1;
		while (++i < size)
			tab[i] = arr[i + 1];
	}
	else if (j == -1)
	{
		i = 1;
		while (i < size)
		{
			tab[i] = arr[i - 1];
			i++;
		}
	}
	free (arr);
	return (tab);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int		array_len(char	**av)
{
	int	size;
	int	i;

	i = 0;
	size = 0;
	while(av[i] != NULL)
	{
		size++;
		i++;
	}
	return (size);
}