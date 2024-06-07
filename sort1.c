/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:33 by mbouras           #+#    #+#             */
/*   Updated: 2024/06/03 09:44:41 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	fct(t_variables *variable, t_stack *a, t_stack *b, int size)
{
	while (variable->k <= variable->marg * 2 * variable->i)
	{
		if (variable->k == size)
			break ;
		if (a->arr[0] >= variable->arr2[variable->neg]
			&& a->arr[0] <= variable->arr2[variable->pos])
		{
			pb(a, b);
			if (variable->k > 1 && b->arr[0] > variable->arr2[variable->mid])
				rb(b);
			variable->k++;
		}
		else
			ra(a);
	}
}

void	sort1(t_stack *a, t_stack *b, int marg, int size)
{
	t_variables	variable;
	variable.i = 1;
	variable.k = 0;
	variable.marg = marg;
	variable.arr2 = sort(a->arr, size, 0, 0);
	variable.mid = (size - 1) / 2;
	while (variable.k < size)
	{		
		variable.neg = variable.mid - (marg * variable.i);
		if (variable.neg < 0)
			variable.neg = 0;
		variable.pos = variable.mid + (marg * variable.i);
		if (variable.pos >= size)
			variable.pos = size - 1;
		fct(&variable, a, b, size);
		variable.i++;
	}
	free(variable.arr2);
}
