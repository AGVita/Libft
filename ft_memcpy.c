/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:53:03 by rzarquon          #+#    #+#             */
/*   Updated: 2021/10/23 12:26:25 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dss;
	const unsigned char	*srr;

	dss = dst;
	srr = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{	
		*dss = *srr;
		dss++;
		srr++;
		n--;
	}
	return (dst);
}
