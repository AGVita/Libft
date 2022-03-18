/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:35:48 by rzarquon          #+#    #+#             */
/*   Updated: 2021/10/19 16:35:30 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	char	*dest;
	size_t	i;
	int		j;
	int		count;

	dest = (char *)haystack;
	count = 0;
	if (ft_strlen(needle) == 0)
		return (dest);
	while (dest[count] != '\0' && len != 0)
	{	
		i = 0;
		j = count;
		while (needle[i] == dest[j] && i < len)
		{	
			i++;
			j++;
			if (needle[i] == '\0')
				return ((char *)&dest[j - i]);
		}
		count++;
		len--;
	}
	return (NULL);
}
