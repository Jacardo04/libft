/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:37:23 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/13 17:39:10 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	j;
	unsigned char	*r;

	i = 0;
	j = (unsigned char)c;
	if (j == '\0')
		return ((char *)s + i);
	while (s[i] != '\0')
	{
		if (s[i] == j)
			r = ((char *)s + i);
		i++;
	}
	if (j == '\0')
		return ((char *)s + i);
	else
		return (r);
}

//int	main(void)
//{
	//char name[] = "lebronnnnnn";
	//printf("%s", ft_strrchr(name, 'b'));
//}