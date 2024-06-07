/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:37 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:38 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	check_rrb(int *arr, int key, int size)
{
	int	i;

	i = 0;
	while (arr[i] != key)
		i++;
	if (i < size / 2)
		return (0);
	return (1);
}

void	sort2(t_stack *a, t_stack *b, int *arr, int size)
{
	int	j;
	int	rotate;

	j = size;
	rotate = 0;
	while (--j >= 0)
	{
		rotate = check_rrb(b->arr, arr[j], b->top);
		while (1)
		{
			if (b->arr[0] == arr[j])
			{
				pa(a, b);
				break ;
			}
			else
			{
				if (!rotate)
					rb(b);
				else
					rrb(b);
			}
		}
	}
	free (arr);
}
