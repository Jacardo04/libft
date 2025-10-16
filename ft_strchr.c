/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:03:55 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/13 17:38:16 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	j;

	i = 0;
	j = char(c);
	while (s[i] != '\0')
	{
		if (s[i] == j)
			return ((char *)s + i);
		i++;
	}
	if (j == '\0')
		return ((char *)s + i);
	return (0);
}
