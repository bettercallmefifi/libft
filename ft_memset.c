/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:17:47 by feel-idr          #+#    #+#             */
/*   Updated: 2025/11/02 22:10:33 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
// 	int i = 0;

// 	unsigned char *str = (unsigned char *)&i;
// 	ft_memset(str,255,1);
// 	ft_memset(str + 1,255,1);
// 	ft_memset(&str[2],255,1);
// 	ft_memset(&str[3],255,1);
// 	printf("%d\n", i);
// }
