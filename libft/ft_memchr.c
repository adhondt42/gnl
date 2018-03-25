/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:46:41 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/28 20:43:03 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			counter;

	str = (unsigned char*)s;
	counter = 0;
	while (counter < n)
	{
		if ((unsigned char)c == *str)
			return ((void*)str);
		str++;
		counter++;
	}
	return (NULL);
}
