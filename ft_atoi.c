/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:44:48 by rzarquon          #+#    #+#             */
/*   Updated: 2021/11/08 17:19:54 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	pere;

	pere = 0;
	sign = 1;
	while ((*str >= 8 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		pere = (pere * 10) + (*str - '0');
		str++;
	}
	if (pere > 9223372036854775807 && sign == 1)
		return (-1);
	if (pere > 9223372036854775807 && sign == -1)
		return (0);
	return (pere * sign);
}
