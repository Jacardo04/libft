/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:19:15 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/14 18:41:53 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (big == '/0')
		return (0);
	if (little == '/0')
		return (big);
	while (i < len)
	{
		j = 0;
		while (big[i + j] == small[j] && i + j < len && big[i + j])
		{
			j++;
			if (small[j] == '/0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
