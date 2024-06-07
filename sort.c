/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:29 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:30 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	*sort(int *arr, int size, int i, int j)
{
	int	tmp;
	int	*arr2;

	arr2 = malloc (size * sizeof(int));
	if (!arr2)
		return (NULL);
	i = -1;
	while (++i < size)
		arr2[i] = arr[i];
	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (arr2[i] > arr2[j])
			{
				tmp = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = tmp;
			}
		}
	}
	return (arr2);
}
