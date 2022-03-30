/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:17:33 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/30 17:36:48 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* The strncmp function lexicographically compare the null-terminated strings S1 and S2. The strncmp function compares not more than n characters. Because strncmp is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared.
 * RETURN VALUES : Strncmp function return an integer greater thanm equal to, or less than 0, according as the string s2. The comparaison is done using unsigned characters, so that '\200' is greater than '\0'. */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
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

int main ()
{
	char s1[] = "itest";
	char s2[] = "test";

	int c;
	c = 0;
	c = ft_strncmp(s1, s2, 2);
	printf("%i", c);
	return (0);
}
