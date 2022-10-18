/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcprintf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:33:55 by jbrami            #+#    #+#             */
/*   Updated: 2022/10/18 16:13:23 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharbis(int c, int *i)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_putstrbis(char *str, int *i)
{
	size_t	j;

	if (!str)
		ft_putstrbis(("(null)"), i);
	else
	{
		j = -1;
		while (str[++j])
			ft_putcharbis(str[j], i);
	}
}

void	ft_putnbrbis(int nb, int *i)
{
	if (nb == -2147483648)
	{
		ft_putcharbis('-', i);
		ft_putcharbis('2', i);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putcharbis('-', i);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbrbis(nb / 10, i);
		ft_putcharbis((nb % 10) + '0', i);
	}
	else
		ft_putcharbis(nb + '0', i);
}

void	ft_putnbrui(unsigned long long nb, int *i)
{
	if (nb > 9)
	{
		ft_putnbrui(nb / 10, i);
		ft_putcharbis((nb % 10) + '0', i);
	}
	else
		ft_putcharbis(nb + '0', i);
}

void	ft_putnbrhexa(unsigned int nb, char *base, int *i)
{
	if (nb > 15)
	{
		ft_putnbrhexa(nb / 16, base, i);
		ft_putcharbis(base[nb % 16], i);
	}
	else
		ft_putcharbis(base[nb], i);
}
