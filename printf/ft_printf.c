/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:14:04 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/07 20:02:46 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *format, ...)
{
    va_list  i;
    int  counter;

    counter = 0;
    va_start(i, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                ft_putcharv2(va_arg(i, char), &counter);
            }
            else if (*format == 's')
            {
                ft_putstr();
            }
        }
        format++;
    }
    
    va_end(i);
    return(counter);
}