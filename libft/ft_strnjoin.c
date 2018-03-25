/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:52:11 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/22 15:08:42 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, int n)
{
	char	*dest;
	int		i;

	if (!(s1 && s2))
		return (NULL);
	i = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	n = (n > i) ? i : (n += 0);
	if ((dest = (char *)malloc(sizeof(dest) * (n + 1))) == NULL)
		return (NULL);
	dest[n] = '\0';
	i = 0;
	while (*s1 && n > 0)
	{
		dest[i++] = *s1;
		s1++;
		n--;
	}
	while (*s2 && n > 0)
	{
		dest[i++] = *s2;
		s2++;
		n--;
	}
	return (dest);
}
