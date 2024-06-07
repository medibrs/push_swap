/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:47 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:48 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->top == -1)
		exit(0);
	tmp = a->arr[0];
	a->arr[0] = a->arr[1];
	a->arr[1] = tmp;
	if (a->k != 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->top == -1)
		exit(0);
	tmp = b->arr[0];
	b->arr[0] = b->arr[1];
	b->arr[1] = tmp;
	if (b->k != 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	if (a->top == -1 || b->top == -1)
		exit(0);
	a->k = 1;
	b->k = 1;
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
