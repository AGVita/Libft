/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:31:15 by rzarquon          #+#    #+#             */
/*   Updated: 2021/10/19 19:44:42 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{	
	size_t	lend;
	size_t	lens;
	size_t	i;
	size_t	itog;

	i = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	if (dstsize >= lend)
		itog = lend + lens;
	else
		return (dstsize + lens);
	while (src[i] != '\0' && (lend + 1 < dstsize))
	{	
		dst[lend] = src[i];
		i++;
		lend++;
	}
	dst[lend] = '\0';
	return (itog);
}
