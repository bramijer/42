/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:48:46 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 15:46:07 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The atoi function converts the intial portion of the string pointed to by str
to int representation. The atoi function skips all white-space characters at the beginning
of the string, converts the subsequent characters as part of the number, and then stops when
it encounters the first character that isn't a number 
RETURN VALUES : la fonction atoi retourne la valeur 0 si la chaine de caractere ne contient pas 
une representation de valeur numerique */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	long int	result;
	long int	negativ;

	result = 0;
	negativ = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			negativ = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (result * negativ);
}

int		main(void)
{
	printf("%d\n", ft_atoi("35"));
	return (0);
}