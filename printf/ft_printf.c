/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:53:48 by jbrami            #+#    #+#             */
/*   Updated: 2022/10/18 12:14:53 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list arg, const char format, int *i)
{
	if (format == 'c')
		ft_putcharbis(va_arg(arg, int), i);
	else if (format == 's')
		ft_putstrbis(va_arg(arg, char *), i);
	else if (format == 'd' || format == 'i')
		ft_putnbrbis(va_arg(arg, int), i);
	else if (format == 'u')
		ft_putnbrui(va_arg(arg, unsigned int), i);
	else if (format == 'x' || format == 'X' || format == 'p')
		ft_puthexa(format, va_arg(arg, unsigned long), i);
	else if (format == '%')
		ft_putcharbis('%', i);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, format);
	i = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_format(arg, *format, &i);
		}
		else
			ft_putcharbis(*format, &i);
		format++;
	}
	va_end(arg);
	return (i);
}
