/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 00:26:24 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/13 17:37:52 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tmpd;
	const unsigned char	*tmps;

	tmpd = dst;
	tmps = src;
	i = 0;
	if (src == NULL || dst == NULL)
		return (dst);
	while (i < n)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return (dst);
}

// int main (void)
// {
// 	char *src = "goat";
// 	char dst[5];
// 	printf("%s \n",src);
// 	ft_memcpy(dst,src,5);
// 	printf("source %s\ndest %s",src, dst);
// 	return(0);
// }