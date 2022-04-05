/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:09:27 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 21:03:30 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The toupper function converts a lower-case letter to the corresponding upper-case letter. The argument must be representable as an unsigned char or the value of EOF.
 * RETURN VALUES : If the argument if a lower case letter, the toupper function returns the corresponding upper case letter if there is one, otherwise, the argument is returned unchanged*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else 
	{
		return (c);
	}
}

/*int main(void)
{
	printf("%c", ft_toupper('j'));
	return (0);
}*/