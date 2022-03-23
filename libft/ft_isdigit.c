/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:18:09 by jbrami            #+#    #+#             */
/*   Updated: 2022/03/22 16:17:24 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* functions return 0 if the caracter test false and return non-zero if the caracter tests true */

int isdigit (int c)
{
	if ('0' >= c && '9'<= c)
	{
		return (1);
	}
	return (0);
}

int main()
{
	return isdigit('9');
}
