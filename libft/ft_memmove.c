/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:40:04 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/06 16:00:51 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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