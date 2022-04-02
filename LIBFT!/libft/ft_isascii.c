/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:03:27 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/31 00:35:44 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isascii function test for an ASCII character, 
which is any character between 0 and 127 */

int	isascii (int c)
{
	if (0 >= c && c <= 127)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	return isascii('K');
}
