/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforbes <jforbes@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 19:16:12 by jforbes           #+#    #+#             */
/*   Updated: 2025/10/11 16:36:40 by jforbes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	if (!c[i])
	{
		return (0);
	}
	while (c[i])
		i++;
	return (i);
}

//int main()
//{
//	char goat[] = "lebron";
//	size_t len = ft_strlen(goat);
//	
//	printf("%li", len);
//}//