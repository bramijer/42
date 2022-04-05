/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:53:35 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 21:10:43 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (s && s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while ((s[i] != c) && s[i])
				i++;
		}
	}
	return (count);
}

static int	get_start_word(size_t *i, const char *s, char c)
{
	while (s[*i] == c && s[*i])
		*i = *i + 1;
	return (*i);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	size_t			i;
	size_t			start;
	size_t			count;

	count = 0;
	result = malloc(ft_count(s, c) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (s && s[i])
	{
		start = get_start_word(&i, s, c);
		while (s[i] != c && s[i])
			i++;
		if (i != start)
		{
			result[count] = ft_substr(s, start, i - start);
			count++;
		}
		if (s[i])
			i++;
	}
	result[count] = NULL;
	return (result);
}