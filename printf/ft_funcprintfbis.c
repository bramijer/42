/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcprintfbis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:54:19 by jbrami            #+#    #+#             */
/*   Updated: 2022/10/18 12:45:40 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharul(unsigned long nb, char *base, int *i)
{
	if (nb > 15)
	{
		ft_putcharul(nb / 16, base, i);
		ft_putcharbis(base[nb % 16], i);
	}
	else
		ft_putcharbis(base[nb], i);
}

void	ft_puthexa(char select, unsigned long nb, int *i)
{
	char	*base;

	if (select == 'p' || select == 'x')
		base = "0123456789abcdef";
	if (select == 'X')
		base = "0123456789ABCDEF";
	if (select == 'p')
	{
		ft_putstrbis("0x", i);
		ft_putcharul(nb, base, i);
	}
	else
		ft_putnbrhexa(nb, base, i);
}
