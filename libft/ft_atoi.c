/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:48:46 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/07 10:20:08 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Cette fonction permet de transformer une chaine de caractères, représentant
une valeur numerique de type "INT". ATOI = ASCII to INTEGER */

int	ft_atoi(const char *str)
{ 
	/* On commence par créer deux variables. La varible "result" va posséder notre 
	résultat qui va être retourner. On utilise des "long" puisque c'est s'assurer qu'il 
	 est capable de contenir, au minimum, des valeurs comprises entre -2147483647 
	 et 2147483647. La varibale "negativ" nous servira à tranformer l'int négatif, dans 
	 le cas où celui-ci est négatif qui est mis dans une chaine de caractères. Nous
	 le déclarons en "long" comme ça on peut multiplier notre résultat à la fin. Nous les 
	 déclarons 
	 */

	long int	result;
	long int	negativ;

	result = 0;
	negativ = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	/* Une fois passé les espacements supplémentaire, s'il existent, nous checkons pour voir 
	s'il y a un symbole "-" au début du nombre que nous allons convertir. Si nous voyons 
	un symbole négatif, nous déclarons notre variable "negativ" à "-1" pour multiplier notre 
	résultat quand nous le retournons. */
	
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			negativ = -1;
		}
		str++;
	}
	/* Ici nous convertissons notre chaine de caractères, passant de "char" à un "int" tant 
	qu'ils sont des nombres. Si le caractère sur lequel nous nous trouvons est un nombre, nous 
	le convertissons en sa valeur ASCII. Pour le 1er caractère, "result" est toujours initialiser
	à 0. Nous multiplions par 10 immédiatement par notre résultat pour configurer le  placement 
	dex chiffres là où il devrait l'être. Ensuite, on soustrait la valeur numérique du caractère 0
	sur la table ASCII de notre numéro actuel, cela lui donne sa valeur ASCII. Nous itérons à nouveau 
	jusqu'à trouver un caractère qui n'est pas un numéro. */
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	/* Enfin, nous retournons la valeur de "result" multiplier par "negativ" pour retourner le nombre
	basé sur le fait que celui-ci soit négatif ou non.*/
	return (result * negativ);
}

/*int		main(void)
{
	printf("%d\n", ft_atoi("35"));
	return (0);
}*/