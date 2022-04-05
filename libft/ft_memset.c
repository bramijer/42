/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:26:57 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 21:01:31 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* memset function write len bytes of value c to the string b
 * return value : memset function returns its first argument 
 * le premier argument est void *b
 * int vaut 4 octets, donc on le caste dans un char afin de lire charactere par charactere 
 * pourquoi unsigned ? parce que on le compare a la longueur (size_t) il est focement positif
 * */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i++] = (char)c;
	}
	return (b);
}

/*int main()
{
	char s[] = "bonjour";
	int tab [4] = {1, 2, 3, 4};
	int i = 0;

	printf("str pre memset : %s\n", s);
	printf("resultat jerome : %p\n", ft_memset(s, -10, 3));
	printf("str post memset jerome : %s\n", s);
	printf("resultat fct originale : %p\n", memset(s, -10, 4));
	printf("str post memset fct originale : %s\n", s);
	ft_memset(tab, '5', 1);
	while (i < 4)
	{
		printf("tab post memset : %d\n", tab[i]);
		i++;
	}
	return (0);
}*/