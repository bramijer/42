/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfonc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:14:50 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/08 14:33:03 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x, int *counter)
{
	write(1, &x, 1);
	counter++;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
	{
		n = nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}

void	ft_putnbr(unsigned int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
	{
		n = nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}

void	ft_puthexa(char lequel, unsigned int x, int *counter)
{
	char	*base;

	if (lequel == 'x' || lequel 'p')
	{
		base = "0123456789abcdef";
	}
	else
	{
		base = "0123456789ABCDEF";
	}
}
