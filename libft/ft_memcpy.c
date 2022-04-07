/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:20:03 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/06 16:00:45 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n > 0)
	{
		n--;
		destination[n] = source[n];
	}
	return (dst);
}

/*int main(int ac, char **av)
{
	printf("%s", (char *)ft_memcpy(av[1], av[2], 0));
	return (0);
}*/