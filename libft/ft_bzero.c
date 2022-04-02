/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:08:07 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/25 18:19:43 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

/* bzero function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to the arear 
 * s : existing object that you want to fill with zeroes
 * n : th number of bytes to fill*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}

int main()
{
	return (0);
}
