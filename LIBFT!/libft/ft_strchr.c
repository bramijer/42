/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:03:38 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/31 00:48:09 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* The strchr function locates the first occurence of c (converted to a char) in the string pointed to by s. The terminating null character is considered to be a part of the string; therefore if c is '\0', the functions locate the terminating '\0' */

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (0);
		}
		str++;
	}
	return (str);
}

/*int	main()
{
	printf("%s", ft_strchr("bnoj", 'o'));
	return (0);
}*/