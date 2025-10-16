/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:53:27 by feel-idr          #+#    #+#             */
/*   Updated: 2025/10/16 12:15:59 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

int	    ft_isalpha(int c);
int	    ft_isdigit(int c);
int	    ft_isalnum(int c);
int	    ft_isascii(int c);
int	    ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t n);
int     ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	ft_memcpy(void *dest, const void *src, size_t b);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
