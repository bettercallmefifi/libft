/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:39:11 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/19 23:06:30 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char	h;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	if (!c)
		return (str + ft_strlen(s));
	h = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == h)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
