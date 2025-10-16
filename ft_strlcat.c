/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:42:38 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/16 15:03:43 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	i = 0;
	srclen = strlen(src);
	destlen = strlen(dest);
	if (destlen >= size)
		return (srclen + destlen);
	while (src[i] != '\0' && destlen + i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}

// #include <stdio.h>
// #include <stddef.h>
// #include <string.h>
//  int main()
//  {
// 	char dest[20] = "je m'appel ";
// 	printf("%zu\n", ft_strlcat(dest,"ferdaous", 12));
// 	printf("%s\n", dest);
// 	return (0);
//  }