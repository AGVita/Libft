/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:59:02 by rzarquon          #+#    #+#             */
/*   Updated: 2021/10/23 14:26:52 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*c;

	c = (char *)malloc(ft_strlen(s1) + 1);
	if (!c)
		return (NULL);
	ft_strlcpy(c, s1, ft_strlen(s1) + 1);
	return (c);
}
