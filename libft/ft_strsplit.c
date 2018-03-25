/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spliting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:32:13 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/28 20:50:08 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_ctab(char const *src, int c)
{
	int		i;
	int		ntab;

	ntab = 0;
	i = 0;
	while (src[i])
	{
		if (src[i] != c && (src[i - 1] == c || i == 0) && src[i])
			ntab++;
		i++;
	}
	return (ntab);
}

static int		ft_clet(char const *src, int c)
{
	int		i;

	i = 0;
	while (src[i] != c && src[i])
		i++;
	return (i);
}

static char		**ft_createtab(char const *src, int c, int i)
{
	char	**dst;
	int		ntab;
	int		nlet;
	int		k;

	k = -1;
	ntab = ft_ctab(src, c);
	if ((dst = (char **)malloc(sizeof(char*) * (ntab + 1))) == NULL)
		return (NULL);
	dst[ntab] = NULL;
	while (k < ntab && src[i])
	{
		if (src[i] == c)
			i++;
		else if (src[i] != c && (src[i - 1] == c || i == 0) && src[i])
		{
			nlet = ft_clet(src + i, c);
			if ((dst[++k] = (char *)malloc(sizeof(char) * nlet + 1)) == NULL)
				return (NULL);
			dst[k][nlet] = '\0';
			i += nlet;
		}
	}
	return (dst);
}

char			**ft_strsplit(char const *src, char c)
{
	char	**teub;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (src == NULL)
		return (NULL);
	teub = ft_createtab(src, c, i);
	if (teub == NULL)
		return (NULL);
	while (*src)
	{
		if (*src != c && *src)
			teub[i][j++] = *src;
		if (*src == c && *(src - 1) != c && j != 0)
		{
			j = 0;
			i++;
		}
		src++;
	}
	return (teub);
}
