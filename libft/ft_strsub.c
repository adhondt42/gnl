/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:55:16 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/27 15:21:56 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tronc;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((tronc = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (len--)
	{
		tronc[i] = s[start + i];
		i++;
	}
	tronc[i] = '\0';
	return (tronc);
}
