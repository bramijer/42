/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:40:04 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 21:01:27 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* memove function copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner.
 * return values : memove function returns the orginal value of dst */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (src == dst)
	{
		return (dst);
	}
	if (source < destination)
	{
		while (len--)
		{
			*(destination + len) = *(source + len);
		}
		return (dst);
	}
	while (len--)
	{
		*destination++ = *source++;
	}
	return (dst);
}

/*int	main(int ac, char **av)
{
	printf("%s", (char *)ft_memmove(av[1], av[2], 4));
	return (0);
}*/