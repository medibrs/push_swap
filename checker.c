/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:23:54 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:23:55 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	check_arg_numbers(char **av)
{
	int	i;
	int	j;

	j = 1;
	while (av[j])
	{
		i = 0;
		if (!av[j] || av[j][i] == '\0')
		{
			ft_putstr("error! check arguments!\n");
			exit(0);
		}
		while (av[j][i] == ' ')
			i++;
		if (av[j][i] == '\0')
			return (0);
		if ((av[j][i] == '+' || av[j][i] == '-') && av[j][i + 1])
			i++;
		while (av[j][i] >= '0' && av[j][i] <= '9')
			i++;
		if (av[j][i] != '\0' && (av[j][i] > '9' || av[j][i] < '0'))
			return (0);
		j++;
	}
	return (1);
}

int	check_duplicates(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
char	**splited(char **av)
{
	char	**argv;
	char	*temp;
	char	*new_temp;
	int		i;

	i = 1;
	if (!av || !av[1])
		return (NULL);
	temp = ft_strdup("");
	if (!temp)
		return (NULL);
	while (av[i])
	{
		new_temp = ft_strjoin(temp, av[i]);
		temp = ft_strjoin(new_temp, " ");
		if (!temp)
			return (NULL);
		i++;
	}
	argv = ft_split(temp, ' ');
	free(temp);
	return (argv);
}