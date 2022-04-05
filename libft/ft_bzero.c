/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:08:07 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 21:05:21 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* bzero function erases the data in the n bytes 
of the memory starting at the location pointed 
to by s, by writing zeros (bytes containing '\0') to the arear 
 * s : existing object that you want to fill with zeroes
 * n : th number of bytes to fill */

void	ft_bzero(void *s, size_t n)
{
	char *str;

	str = (char *)s;
	while (n--)
		*str++ = 0;
}

/*int	main(void)
{
	return (0);
}*/
