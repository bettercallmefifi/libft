/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:13:18 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/18 14:40:52 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (*little == '\0')
		return ((char *)&big[i]);
	while (big[i] && i <= len - 1)
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (little[j] && big[j + i] == little[j] && (i + j) <= len)
				j++;
			if (j == ft_strlen(little))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

int main()
{
    const char *large = "Foo Bar Baz";
    const char *small = "Bar";
    char *ptr;
    ptr = ft_strnstr(large, small, 5);
    if (ptr != NULL) {
        printf("%s\n", ptr);
    } else {
        printf("Substring not found\n");
    }
    return (0);
}