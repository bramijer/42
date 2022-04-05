/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrami <jbrami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:43:06 by jbrami            #+#    #+#             */
/*   Updated: 2022/04/05 21:08:23 by jbrami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The calloc function allocate memory. The allocated memory is aligned such that 
it can be used for any data type. The free function frees allocations that were
created via the preceding allocation functions.
RETURN VALUES : If successfull calloc function return a pointer to allocate memory. 
If there is an error, they return a NULL pointer. The free function does not return a value. */

#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}

void    *ft_calloc(size_t count, size_t size)
{
    void    *memory;
    
    memory = NULL;
    if (count && (size_t) - 1 / count < size)
    {
        return (NULL);   
    }
    memory = malloc (count * size);
    if (!memory)
    {
        return (NULL);
    }
    ft_bzero(memory, count * size);
    {
        return (memory);
    }
}

/* int main (void)
{
    printf("%s", (char *)ft_calloc(4, 3));
    return (0);
} */