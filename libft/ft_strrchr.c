/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:54:29 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/24 00:57:26 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*cs;

	cs = (char *)s;
	i = ft_strlen(s);
	while (i >= 0 && cs[i] != (char)c)
		i--;
	if (cs[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
