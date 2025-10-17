/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:21:37 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/17 17:39:30 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 43 = + ascii 45 = - ascii
#include "libft.h"

int	ft_isspace(int c);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	return (result * sign);
}

int	ft_isspace(int c)
{
	if (c >= 9 && c <= 13 || c == 32)
		return (1);
	return (0);
}
