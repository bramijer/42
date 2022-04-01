/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:48:46 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/01 19:59:19 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The atoi function converts the intial portion of the string pointed to by str
to int representation. The atoi function skips all white-space characters at the beginning
of the string, converts the subsequent characters as part of the number, and then stops when
it encounters the first character that isn't a number 
RETURN VALUES : la fonction atoi retourne la valeur 0 si la chaine de caractere ne contient pas 
une representation de valeur numerique */


int	atoi(const char *str)
{
	long int	result;
	int			negativ;

	negativ = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		negativ = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - 48);
		str++;
	}
	return (result * negativ);

	#include <stdio.h>

int		main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
}