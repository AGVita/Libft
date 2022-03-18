/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:10:01 by rzarquon          #+#    #+#             */
/*   Updated: 2021/10/19 17:29:34 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	int				len;
	char			*s2;
	unsigned char	i;

	i = (unsigned char)c;
	s2 = (char *)s;
	len = ft_strlen(s2);
	while (len >= 0)
	{
		if (s2[len] == i)
		{	
			return ((char *)&s2[len]);
		}
		len--;
	}
	if (c == '\0')
		return (s2);
	return (NULL);
}
