/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:26:20 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/17 19:57:14 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	totallen;
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen > size)
		dstlen = size;
	totallen = dstlen + srclen;
	if (dstlen == size)
		return (totallen);
	while (src[i] != '\0' && dstlen + i < size - 1)
		dst[dstlen + i] = src[i++];
	dst[dstlen + i] = '\0';
	return (totallen);
}
