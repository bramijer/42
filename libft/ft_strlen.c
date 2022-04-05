/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:48:55 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 20:56:55 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* strlen function computes th length of the string. returns the number of characters that precede the terminating NUL character */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
	printf("la longeur de la phrase est de : %zu", ft_strlen("milan"));
	return (0);
}*/