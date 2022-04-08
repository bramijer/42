/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:14:04 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/08 14:36:19 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *format, ...)
{
    va_list i;
    int     counter;

    counter=0;
    va_start(i, format);
        while   (*format != '\0')
        {
            if (*format == '%')
            {
            format++;
            if (*format == 'c')
                ft_putchar(va_arg(i, char), &counter);
            else if (*format == 's')
                ft_putstr(va_arg(i, char *), &counter);
            else if (*format == 'd' || *format == 'i')
                ft_putnbr(va_arg(i, int), &counter);
            else if (*format == 'u')
                ft_putnbrusignednumber(va_arg(i, unsigned int), &counter);
            else if (*format == 'x' || *format == 'X' || *format == 'p')
                ft_puthexa(va_arg(i, unsigned int), &counter);
            else if (*format == 'x')
                ft_putchar('%', &counter);
            else 
                ft_putchar('%', counter);
        }
        format++;
    }
    va_end(i);
    return(counter);
}
