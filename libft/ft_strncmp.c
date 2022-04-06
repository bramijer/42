/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:17:33 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/06 16:10:03 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i] && i < n))
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	else if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/*int	main (void)
{
	char s1[] = "itest";
	char s2[] = "test";

	int c;
	c = 0;
	c = ft_strncmp(s1, s2, 2);
	printf("%i", c);
	return (0);
}*/