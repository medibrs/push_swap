/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:43 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:44 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_stack	create_stack(int size)
{
	t_stack	stack;

	stack.top = -1;
	stack.bot = -1;
	stack.arr = malloc(size * sizeof(int));
	return (stack);
}

t_stack	fill_stack(char **argv)
{
	int			i;
	long		nb;
	int			size;
	t_stack		stack;

	i = 1;
	size = 0;
	while (argv[i++] != NULL)	
		size++;
	stack = create_stack(size);
	i = 0;
	while (argv[i] != NULL)
	{
		nb = ft_atoi(argv[i]);
		stack.arr[++stack.top] = nb;
		i++;
	}
	return (stack);
}

int	is_sorted(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < size)
	{
		if (arr[i] > arr[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}
