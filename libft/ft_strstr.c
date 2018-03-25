/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:53:51 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/24 01:56:45 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *string, const char *pik)
{
	int		i;
	int		j;

	i = 0;
	if (pik[i] == '\0')
		return ((char *)string);
	while (string[i])
	{
		j = 0;
		while (string[i + j] == pik[j] && string[i + j])
		{
			if (pik[j + 1] == '\0')
				return ((char *)(string + i));
			j++;
		}
		i++;
	}
	return (0);
}
