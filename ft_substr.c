/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 23:22:06 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/19 00:34:46 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	size_t			slen;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= strlen(s))
		return (strdup(""));
	slen = strlen (s);
	if (len > slen - start)
		len = slen - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[start + 1] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// #include <stdio.h>

// int main(void)
// {
//     char *str = "Hello World";

//     printf("1: %s\n", ft_substr(str, 6, 5));   
//     printf("2: %s\n", ft_substr(str, 0, 5));   
//     printf("3: %s\n", ft_substr(str, 11, 3)); 
//     printf("4: %s\n", ft_substr(str, 3, 20)); 
//     return 0;
// }
