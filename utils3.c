/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:25:04 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:25:05 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*d;
	size_t				i;

	if (dest == src)
		return (dest);
	i = 0;
	ptr = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (n == 0)
		return (d);
	if (n > 0)
	{
		while (n-- > 0)
		{
			d[i] = ptr[i];
			i++;
		}
		return ((char *)dest);
	}
	return (NULL);
}