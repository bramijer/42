/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:01:05 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/27 18:38:10 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/* The strlcpy functions copy and concatenate strings with the same input parameters and output result as snprintf. strlcpy take the full size. slrcpy take the full size of the destination buffer and guarantee NULL-termination if there is room. Note that room for the NUL should be included in dstsize 
 * Return Values : total length string try tro create -> length of src*/

size_t ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t i;

	if (!dstsize)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{		
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int main(int ac, char **av)
{
	printf("%s", (char *)ft_strlcpy(av[1], av[2], 4));
	return (0);
}
