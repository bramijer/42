/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:32:38 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 21:00:43 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isalpha 
 * return value 
0 : if the paramater isn't an alphabet
non zero number ; if the parameter is an alphabet */

#include "libft.h"

int	isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*int main()
{
	return isalpha('b');
}*/
