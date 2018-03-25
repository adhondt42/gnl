/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:26:35 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/22 15:05:40 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *tab, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (tab[i] != c && tab[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = tab[i];
		i--;
	}
	return (str);
}
