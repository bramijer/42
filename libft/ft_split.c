/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:53:35 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/03 23:31:53 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    char tab[] = "hello";
    ft_putstr("src string is: ");
    ft_putstr(tab);
    ft_putchar(10);
    ft_putstr("dest string is: ");
    ft_strdup(tab);
    ft_putchar(10);
    return (0);
}