/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:53:51 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/27 17:04:42 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	o;

	i = 0;
	k = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && k != n)
	{
		j = 0;
		o = k;
		while (str[i + j] == to_find[j] && str[i + j] && o < n)
		{
			o++;
			if (to_find[j + 1] == '\0')
				return ((char *)(str + i));
			j++;
		}
		k++;
		i++;
	}
	return (0);
}
