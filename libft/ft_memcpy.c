/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:20:03 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/31 00:44:46 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* the memcpy function copies n bytes from memory area src to memory area dst. 
 * If dst and src overlap, behavior is undefined. Applications in which dst and src overlap should use memmove instead 
 * memcpy function returns the original value of dst */

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
