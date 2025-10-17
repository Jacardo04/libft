/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:26:51 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/17 20:00:24 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*d;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	d = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!d)
		return (NULL);
	while (s1[i])
		d[j++] = s1[i++];
	i = 0;
	while (s2[i])
		d[j++] = s2[i++];
	return (d);
}

// // void main ()
// {
// 	char j[] = "goated";
// 	char *i;
// 	i = NULL;
// 	printf("%s",ft_strjoin(i, j));
// }