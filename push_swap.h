/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:05 by mbouras           #+#    #+#             */
/*   Updated: 2024/06/02 14:29:44 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_variables
{
	int	neg;
	int	pos;
	int	marg;
	int	i;
	int	k;
	int	mid;
	int	*arr2;
}	t_variables;

typedef struct s_stack
{
	int	top;
	int	bot;
	int	*arr;
	int	k;
}	t_stack;

void	fct(t_variables *variable, t_stack *a, t_stack *b, int size);
int		check_arg_numbers(char **av);
char	**splited(char **av);
int		check_duplicates(int *arr, int size);
t_stack	create_stack(int size);
t_stack	fill_stack(char **argv);
int		array_len(char	**av);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_strlen(char *s);


int		ft_strcmp(char *s1, char *s2);
long	ft_atoi(const char *str);
int		*ft_realloc(int	*arr, int size, int j);
int		get_marge(int tab_size);

void	check_limits(char **av);

void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

int		*sort(int *arr, int size, int i, int j);
void	sort1(t_stack *a, t_stack *b, int marg, int size);
void	sort2(t_stack *a, t_stack *b, int *arr, int size);
void	small3(t_stack *a);
void	small4(t_stack *a, t_stack *b);
void	small5(t_stack *a, t_stack *b);
int		find_min(int *arr, int size);
t_stack	push_swap(t_stack a, t_stack b, int ac);
int		is_sorted(int *arr, int size);
void	ft_putstr(char *str);
#endif