/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initializetab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 16:27:52 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/07 20:01:10 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_initializetab(int size)
{
	char	**tab;

	if (size < 0)
	{
		ft_putstr("\n-- Error ft_initializetab, size < 0 --\n");
		return (NULL);
	}
	tab = (char **)malloc(sizeof(char *) * size);
	while (size > 0)
		tab[--size] = NULL;
	return (tab);
}
