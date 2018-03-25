/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtabdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 15:09:15 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/22 15:10:02 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabtabdup(char **src, int itt, int it)
{
	char	**dest;
	int		k;
	int		tlen;

	if (itt <= 0 || it <= 0 || src == NULL)
		return (NULL);
	itt = (int)(ft_tablen(src)) > itt ? itt : (int)(ft_tablen(src));
	k = 0;
	dest = (char **)malloc(sizeof(char *) * (itt + 1));
	dest[itt] = NULL;
	while (k != itt && src[k] != NULL)
	{
		tlen = (int)(ft_strlen(src[k])) > it ? it : (int)ft_strlen(src[k]);
		dest[k] = ft_strndup(src[k], tlen);
		k++;
	}
	return (dest);
}
