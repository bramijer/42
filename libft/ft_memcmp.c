/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:41:52 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/30 20:29:49 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* The memcmp function compares byte string s1 against byte string s2. Both string are assumed to be n bytes long.
 * RETURN VALUES : The memcmp function return zero if the two strings are identical, otherwise returns the difference betwenn the first two differing bytes. 
 * Zero lentgh string are always identical.
 * */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*t1;
	unsigned const char		*t2;

	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	if (t1 == NULL || t2 == NULL)
	{
		return (0);
	}
	while (n)
	{
		if (*t1 != *t2)
		{
			return (*t1 - *t2);
		}
	t1++;
	t2++;
	n--;
	}
	return (0);
}

int main()
{
	char s1[] = "test1";
	char s2[] = "test2";
	int 	c;
	c = 0;

	c = ft_memcmp(s1, s2, 2);
	printf("%i", c);
	return (0);
}
