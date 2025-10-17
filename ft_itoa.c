/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:33:30 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/17 20:00:44 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_memcal(int n);

char	*ft_itoa(int n)
{
	int		mem_space;
	char	*result;
	int		flag;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	flag = 0;
	mem_space = ft_memcal(n);
	result = malloc(mem_space + 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		flag = -1;
		n = n * -1;
	}
	result[mem_space] = '\0';
	while (--mem_space > -1)
	{
		result[mem_space] = (n % 10) + 48;
		n = n / 10;
	}
	if (flag == -1)
		result[0] = '-';
	return (result);
}

//*static int declares an integer variable*//
//*with a special "static" storage modifier.*//
//*This means the variable's storage persists*//
//*for the entire lifetime of the program*//

static int	ft_memcal(int n)
{
	int	sigfig;

	sigfig = 1;
	if (n < 0)
	{
		n = n * -1;
		sigfig++;
	}
	while (n > 9)
	{
		n = n / 10;
		sigfig++;
	}
	return (sigfig);
}
