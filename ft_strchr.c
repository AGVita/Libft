/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:14:44 by rzarquon          #+#    #+#             */
/*   Updated: 2021/10/19 16:43:59 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{	
	char			*s2;
	unsigned char	i;

	i = (unsigned char)c;
	s2 = (char *)s;
	while (*s2)
	{
		if (*s2 == i)
		{
			return (s2);
		}
		s2++;
	}
	if (c == '\0')
		return (s2);
	return (NULL);
}
