/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:49:40 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/24 00:44:15 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start_trim(char const *s1, char const *set)
{
	unsigned int	i;
	int				j;
	size_t			len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

static int	end_trim(char const *s1, char const *set)
{
	unsigned int	i;
	int				j;
	unsigned int	t_len;

	t_len = ft_strlen(s1);
	i = 0;
	while (i < t_len)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[t_len - i - 1] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (t_len - i);
		i++;
	}
	return (t_len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	if (!(*s1))
		return (ft_strdup(""));
	if (!(*set))
		return (ft_strdup(s1));
	start = start_trim(s1, set);
	end = end_trim(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
