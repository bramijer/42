/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:48:55 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/23 12:10:27 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

/* strlen function computes th length of the string. returns the number of characters that precede the terminating NUL character */

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	printf("la longeur de la phrase est de : %zu", ft_strlen("milan"));
	return (0);
}
