/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:24:05 by rzarquon          #+#    #+#             */
/*   Updated: 2021/10/20 21:22:06 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	size_t	i;

	i = ft_strlen(src);
	if (dstsize > 0)
	{
		while (dstsize > 1 && *src != '\0')
		{
			*dst++ = *src++;
			dstsize--;
		}
		*dst = '\0';
	}
	return (i);
}
