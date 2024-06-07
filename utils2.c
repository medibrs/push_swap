/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouras <mbouras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:24:55 by mbouras           #+#    #+#             */
/*   Updated: 2024/05/27 09:24:58 by mbouras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	tlen;
	char	*s;
	size_t	i;
	size_t	j;

	j = -1;
	i = -1;
	if (!s1)
		s1 = ft_strdup("");
	if (!s2)
		s2 = ft_strdup("");
	tlen = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (tlen + 1));
	if (!s)
		return (NULL);
	while (s1[++i])
		s[i] = s1[i];
	while (s2[++j])
		s[i + j] = s2[j];
	s[i + j] = '\0';
	free(s1);
	return (s);
}

static size_t	count_words(char *s1, char b)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (!s1)
		return (0);
	while (s1[i])
	{
		while (s1[i] == b)
			i++;
		if (s1[i] != b)
		{
			count++;
			while (s1[i] && s1[i] != b)
				i++;
		}
	}
	return (count);
}

static char	*malloc_strings(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	**src;

	if (!s)
		return (NULL);
	len = count_words((char *)s, c);
	src = (char **)malloc(sizeof(char *) * len + 1);
	if (!src)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			src[i] = malloc_strings(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	src[i] = NULL;
	return (src);
}
char	*ft_strdup(const char *str)
{
	int		n;
	char	*ptr;

	n = ft_strlen((char *)str);
	ptr = (char *)malloc(n + 1);
	if (ptr != NULL)
	{
		ft_memcpy(ptr, str, n);
		ptr[n] = '\0';
		return (ptr);
	}
	return (NULL);
}
