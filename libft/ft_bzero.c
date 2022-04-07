/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:08:07 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/07 12:10:33 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La fonction BZERO met à "0" les n premiers octets dy bloc pointé par la chaine
de caractères s. Si "n == 0" ft_bzero ne fait rien. Une autre façond de dire ça c'est 
que nous faisons une chaine de caractères de la taille "n" et la remplir chaque position
de l'index avec un "0". Nous utilisons notre fonction précedemment écrite "ft_memset" 
pour faire ceci. Revoyons "ft_memset" pour comprendre comment elle fonctionne and nous 
apercevoir que les paramètres que nous lui donnons ici quand nous l'appelons. Nous l'avons
défini à l'avance pour remplir n'importe auelle chaine de caractères de taille "n" 
avec des "0". */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	return (0);
}*/
