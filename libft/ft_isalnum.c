/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:26:15 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 15:37:56 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isalnum functions return 0 if the character tests false and returns non-zero if the character test true. 
 * de 0 a 127 */

int	ft_isalnum (int c)
{
	if (c <= 40 && 126 >= c)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	return isalnum('B');
}