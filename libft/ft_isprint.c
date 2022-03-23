/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:23:42 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/22 16:48:31 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* printing character test, the function isprint tests for any printing character, including spaces. The value of the argument must be representable as un unsigned char. the functions return zero if the character tests false and return non-zero if the character tests true */

int isprint(int c)
{
	if (33 >= c && 126 <= c)
	{
		return (1);
	}
	return (0);
}

int main()
{
	return isprint('B');
}
