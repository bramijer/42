/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:39:02 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 19:28:13 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Save a copy of the string 
The strdup function allocates sufficient memory for a copy of the string s1, does 
the copy, and returns a pointeur to it. The pointer may subsquently be used as an 
argument to the function free. If insufficient memory is available, NULL is returned. */

#include <stdio.h>
#include <stdlib.h>


void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

char    *ft_strdup(const char *s1)
{
   int      i;
   char     *s2;

   i = 0;
   while (s1[i])
   {
       i++;
   }
   s2 = malloc(i+1);
   if (s2 == NULL)
    {
        return (NULL);
    }
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = 0;
    return (s2);
}

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