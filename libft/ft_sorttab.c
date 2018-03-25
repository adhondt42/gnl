/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorttab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 21:08:56 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/22 15:04:42 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_sorttab(char **tab)
{
	int		h;
	int		i;
	int		j;
	char	*tmp;

	i = ft_tablen(tab);
	h = i;
	j = 0;
	while (h-- > 0)
	{
		j = 0;
		while (i > j && tab[j + 1] != NULL)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
	}
}
