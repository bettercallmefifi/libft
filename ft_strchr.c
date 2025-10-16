/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:11:05 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/16 15:41:51 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchar(const char	*s, int c)
{
	unsigned char	h;
	size_t			i;

	i = 0;
	h = (unsigned char)c;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == h)
			return ((char *)s + i);
		i++;
	}
	if (h == '\0')
		return ((char *)&s[i]);
	return (0);
}

// int	main()
// {
// 	char s[] = "ferdaous";
// 	// if (!s)
// 	// 	return 0;
// 	printf("%s",ft_strchar(s,'h'));
// 	return (0);
// }