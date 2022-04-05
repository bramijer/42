/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:05:35 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 21:15:13 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strnstr function locates the first occurence of the null-terminated string needle in the string haystack,
where not more than len characters are searched. Characters that appaear after a '\0' character are not searched. 
Since the strnstr function is a '\0' character are not searched. Sicne the strnstr function is a FreeBSD specific API, 
it should only be used when portability is not a concern.
RETURN VALUES : If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned:;
otherwise a pointer to the first character of the first occurence of needle is returned. 
HAYSTACK : meule de foin
NEEDLE : aiguille */

char	*ft_strnstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	len;
	
	i = 0;
	j = 0;
	len = 0;
	
	if (!*haystack)
	{
		return ((char *)(haystack));
	}
	while (haystack[i] && (i < len))
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j < len))
		{
			j++;
		}
		if (!needle[j])
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
return (NULL);
}

/*int	main(void)
{
	char s1[] = "itest";
	char s2[] = "test";

	int c;
	c = 0;
	c = ft_strnstr(s1, s2, 4);
	printf("%i", c);
	printf("%s", ft_strnstr("itest", "test",5));
	return (0);
}*/