/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:49:40 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/17 19:58:17 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	is_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i++])
		if (set[i] == c)
			return (TRUE);
	return (FALSE);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		wc;
	int		i;
	int		j;
	char	*result;

	if (!set)
		return (s1);
	if (!s1)
		return (NULL);
	j = 0;
	i = 0;
	wc = 0;
	while (s1[i++])
		if (!is_set(set, s1[i]))
			wc++;
	result = malloc(wc + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i++])
		if (!is_set(set, s1[i]))
			result[j++] == set[i];
	return (result[j] = '\0', result);
}
