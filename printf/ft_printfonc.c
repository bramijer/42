/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfonc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:14:50 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/09 16:36:49 by jbrami           ###   ########.fr       */
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

void	ft_putHexa(unsigned int nbr)
{
	char	*base;

	base = '0', '1', '2', '3', '4', '5', '6', '7', '8', '9','a', 'b', 'c', 'd', 'e', 'f';
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	else 
	{
		ft_putchar( / 16);
		ft_putnbr( % 16;
	}
	
	 
void	ft_putHexaMaj(unsigned int nbr)
{
	char *base;
	
	base = '0' '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F';

	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	else 
	{
		ft_putchar( / 16);
		ft_putnbr ( % 16);
	}
	
}