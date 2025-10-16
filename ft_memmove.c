/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:53:09 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/16 19:58:12 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	d = dest;
	if (d < src)
		while (n-- > 0)
			*(char *)dest++ = *(char *)src++;
	else if (d > src)
	{
		dest += n;
		src += n;
		while (n-- > 0)
			*(char *)--dest = *(char *)--src;
	}
	return (d);
}
