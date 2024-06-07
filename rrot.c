/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrot.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:20 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:21 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	rra(t_stack *a)
{
	int	i;
	int	tmp;

	if (a->top == -1)
		exit(0);
	tmp = a->arr[a->top];
	i = a->top + 1;
	while (--i > 0)
		a->arr[i] = a->arr[i - 1];
	a->arr[0] = tmp;
	if (a->k != 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	int	i;
	int	tmp;

	if (b->top == -1)
		exit(0);
	tmp = b->arr[b->top];
	i = b->top + 1;
	while (--i > 0)
		b->arr[i] = b->arr[i - 1];
	b->arr[0] = tmp;
	if (b->k != 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	if (a->top == -1 || b->top == -1)
		exit(0);
	a->k = 1;
	b->k = 1;
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
