/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:14 by mbouras           #+#    #+#             */
/*   Updated: 2024/06/02 14:28:52 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ra(t_stack *a)
{
	int	i;
	int	tmp;

	if (a->top == -1)
		exit(0);
	tmp = a->arr[0];
	i = -1;
	while (++i < a->top)
		a->arr[i] = a->arr[i + 1];
	a->arr[a->top] = tmp;
	if (a->k != 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	int	i;
	int	tmp;

	if (b->top == -1)
		exit(0);
	tmp = b->arr[0];
	i = -1;
	while (++i < b->top)
		b->arr[i] = b->arr[i + 1];
	b->arr[b->top] = tmp;
	if (b->k != 1)
		write(1, "rb\n", 3);
}

	void	rr(t_stack *a, t_stack *b)
	{
		if (a->top == -1 || b->top == -1)
			exit(0);
		a->k = 1;
		b->k = 1;
		ra(a);
		rb(b);
		write(1, "rr\n", 3);
	}
