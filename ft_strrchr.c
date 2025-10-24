/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:37:23 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/23 02:36:39 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	j;

	i = ft_strlen(s);
	j = (char)c;
	if (j == '\0')
		return ((char *)s + i);
	while (--i > -1)
	{
		if (s[i] == j)
			return ((char *)s + i);
	}
	if (j == '\0')
		return ((char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	char name[] = "lebronnnnnn";
// 	printf("%s", ft_strrchr(name, '\0'));
// }