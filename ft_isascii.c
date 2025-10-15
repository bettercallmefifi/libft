/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:52:40 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/14 22:44:20 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
// #include <stdio.h>

// int main()
// {
// 	int a = 100;
// 	char *ptr = (char *)&a;

// 	ptr[0] = 57;
// 	ptr[1] = 5;
// 	ptr[2] = 0;
// 	ptr[3] = 0;
// 	printf("%d\n", ptr[0]);
// 	printf("%d\n", ptr[1]);
// 	printf("%d\n", ptr[2]);
// 	printf("%d\n", ptr[3]);
// 	printf("final : %d\n", a);
// }
