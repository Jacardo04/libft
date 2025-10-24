/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:40:06 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/22 20:26:43 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	wordcount(const char *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

static void	ft_free(char **p)
{
	int	i;

	if (p)
	{
		i = 0;
		while (p[i])
		{
			free(p[i]);
			i++;
		}
		free(p);
	}
}

char	*fill_word(const char *a, char b)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (a[i])
	{
		if (a[i] != b)
		{
			j = i;
			while (a[i] && a[i] != b)
				i++;
			word = malloc(sizeof(char) * (i - j + 1));
			if (!word)
				return (NULL);
			ft_strlcpy(word, a + j, i - j + 1);
			return (word);
		}
		i++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**pop;
	size_t	i;
	int		j;
	int		xword;

	pop = ft_calloc(wordcount(s, c) + 1, sizeof(char *));
	if (!pop)
		return (NULL);
	i = -1;
	j = -1;
	xword = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && xword < 0)
			xword = i;
		else if ((s[i] == c || i == ft_strlen(s)) && xword >= 0)
		{
			pop[++j] = fill_word(s + xword, c);
			if (!pop[j])
				return (ft_free(pop), NULL);
			xword = -1;
		}
	}
	return (pop);
}
//int	main(void)
// {
// 	char	test[] = "warriors beat lakers";
// 	char	delimiter;
// 	char	**res;
// 	int		i;
// 	delimiter = ' ';
// 	res = ft_split(test, delimiter);
// 	i = -1;
// 	while (res[++i])
// 		printf("line[%d] = %s \n", i, res[i]);
// 	ft_free(res);
// 	return (0);
// }
