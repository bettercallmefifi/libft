/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:08:16 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/19 23:07:58 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*str;
	size_t			i;

	i = 0;
	if (!src || !dest)
		return (NULL);
	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	while (i < n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dest);
}
