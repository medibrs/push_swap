/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:22:51 by mbouras           #+#    #+#             */
/*   Updated: 2024/06/04 20:17:21 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	get_marge(int tab_size)
{
	if (tab_size > 150)
		return (18);
	if (tab_size > 10)
		return (8);
	if (tab_size > 5)
		return (5);
	return (1);
}

t_stack	push_swap(t_stack a, t_stack b, int ac)
{
	int		*arr;

	if (ac == 4)
		small3(&a);
	else if (ac == 5)
		small4(&a, &b);
	else if (ac == 6)
		small5(&a, &b);
	else
	{
		arr = sort(a.arr, ac -1, 0, 0);
		sort1(&a, &b, get_marge(ac - 1), ac - 1);
		sort2(&a, &b, arr, ac - 1);
	}
	return (a);
}

void	check_limits( char **av)
{
	int		i;
	long	nb;

	i = 0;
	while (av[i] != NULL)
	{
		nb = ft_atoi(av[i]);
		if (nb > 2147483647 || nb < -2147483648)
		{
			ft_putstr("Error! check arguments\n");
			exit(0);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	if (ac == 1)
		return (0);
	av = splited(av);
	if ( !check_arg_numbers(av))
	{
		ft_putstr("error! check arguments!\n");
		return (0);
	}
	check_limits(av);
	a = fill_stack(av);
	if (check_duplicates(a.arr, array_len(av)))
	{
		ft_putstr("error! check arguments!\n");	
		return (0);
	}
	b = create_stack(0);
	if (array_len(av) + 1  == 3 && a.arr[0] > a.arr[1])
		sa(&a);
	else if (is_sorted(a.arr, array_len(av)))
	{
		ft_putstr("stack is sorted!\n");
		exit(0);
	}
	else
		a = push_swap(a, b, array_len(av) + 1);
	while(1);
}
