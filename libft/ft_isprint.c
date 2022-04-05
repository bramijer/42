/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:23:42 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 15:56:17 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* printing character test, the function isprint tests for any printing character, including spaces. The value of the argument must be representable as un unsigned char. the functions return zero if the character tests false and return non-zero if the character tests true */

int	isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	return isprint('B');
}
