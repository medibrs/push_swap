/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:10 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:11 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (b->top == -1)
		exit(0);
	a->arr = ft_realloc(a->arr, a->top + 2, -1);
	a->top++;
	a->arr[0] = b->arr[0];
	b->arr = ft_realloc(b->arr, b->top, 1);
	b->top--;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->top == -1)
		exit(0);
	b->arr = ft_realloc(b->arr, b->top + 2, -1);
	b->top++;
	b->arr[0] = a->arr[0];
	a->arr = ft_realloc(a->arr, a->top, 1);
	a->top--;
	write(1, "pb\n", 3);
}
