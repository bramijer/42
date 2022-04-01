/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:07:29 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/31 16:00:33 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* strlcat functions copy and concatenate strings with the same input parameters and output result as snprintf. strlcat take the full size of the destination buffer and guarantee NUL-termination if there is room. Note that room for the NUL should be included in dstsize.
 * strlcat appends string src to the end of dst. It will append most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that eiher dstsize is incorrect or that dst is not proper thing).
 * */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (src[i] != '\0' && i < (dstsize -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	printf("%s", (char *)ft_strlcpy(ac[1], av[2], 4));
	return (0);
}*/