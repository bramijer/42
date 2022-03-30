/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:44:58 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/29 21:11:38 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* The strrchr function locates the last occurence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be part of the string; therefore if c is '\0', the function locate the terminating '\0'. 
 * RETURN VALUES : The function strrchr return a pointer to the located character, or NULL if the character does not appear in the string. */

char *ft_strrchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (0);
		}
		str--;
	}
	return (str);
}

int main()
{
	printf("%s", ft_strrchr("bonjour", 'n'));
	return (0);
}
