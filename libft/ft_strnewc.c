/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:50:46 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/24 17:39:47 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnewc(size_t size, char c)
{
	char	*dest;

	if ((dest = (char *)malloc(sizeof(*dest) * size + 1)) == NULL)
		return (NULL);
	dest[size--] = '\0';
	while ((int)size >= 0)
	{
		dest[size] = c;
		size--;
	}
	return (dest);
}
