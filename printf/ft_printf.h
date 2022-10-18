/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:18:08 by jbrami            #+#    #+#             */
/*   Updated: 2022/10/18 12:45:25 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

void	ft_format(va_list arg, const char format, int *i);
int		ft_printf(const char *format, ...);
void	ft_putcharbis(int c, int *i);
void	ft_putstrbis(char *str, int *i);
void	ft_putnbrbis(int nb, int *i);
void	ft_putnbrui(unsigned long long nb, int *i);
void	ft_putnbrhexa(unsigned int nb, char *base, int *i);
void	ft_putcharul(unsigned long nb, char *base, int *i);
void	ft_puthexa(char select, unsigned long nb, int *i);

#endif