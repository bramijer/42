/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:14:04 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/09 17:06:35 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_type (va_list args, char c)
{
    while (c != '\0')
    {
        if (c == 'c')
            ft_putchar(va arg (args, int));
        else if (c == 's')
            ft_putstr(va_arg(args, char *));
        else if (c == 'd' || c == 'i')
            ft_putnbr(va_arg(args, int));
        else if (c == 'u')
            ft_putnbrUnsigned(va_arg(args, unsigned int));
        else if (c == 'x' || c == 'X' || c == 'p')
            ft_puthexa(va_arg(va_arg(args, unsigned long int));
        else if (c == 'x')
            ft_putchar('%', &counter);
        else 
            ft_putchar('%', counter);
    }
    return(counter);
}

int ft_printf(const char *format, ...)
{
    va_list i;
    int     counter;

    counter=0;
    va_start(i, args);
        
    args++;
    }
    va_end(i);
    return(counter);
}
