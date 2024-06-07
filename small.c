/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:24 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:25 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	find_min(int *arr, int size)
{
	int	i;
	int	j;
	int	min;

	i = -1;
	min = arr[0];
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			if (arr[j] < min)
				min = arr[j];
		}
	}
	return (min);
}

void	small3(t_stack *a)
{
	int	min;

	min = find_min(a->arr, a->top + 1);
	if (a->arr[0] == min)
	{
		rra(a);
		sa(a);
	}
	else if (a->arr[1] == min)
	{
		if (a->arr[0] > a->arr[2])
			ra(a);
		else
			sa(a);
	}
	else
	{
		if (a->arr[0] > a->arr[1])
		{
			ra(a);
			sa(a);
		}
		else
			rra(a);
	}
}

void	small4(t_stack *a, t_stack *b)
{
	int	min;

	min = find_min(a->arr, a->top + 1);
	if (a->arr[0] == min)
		pb(a, b);
	else if (a->arr[1] == min)
	{
		sa(a);
		pb(a, b);
	}
	else if (a->arr[2] == min)
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	else
	{
		rra(a);
		pb(a, b);
	}
	small3(a);
	pa(a, b);
}

void	small5(t_stack *a, t_stack *b)
{
	int	min;
	int	i;

	min = find_min(a->arr, a->top + 1);
	i = 0;
	while (i < a->top + 1)
	{
		if (a->arr[i] == min)
		{
			if (i <= 2)
			{
				while (a->arr[0] != min)
					ra(a);
			}
			else if (i > 2)
			{
				while (a->arr[0] != min)
					rra(a);
			}
			pb(a, b);
		}
		i++;
	}
	small4(a, b);
	pa(a, b);
}
