/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:17:36 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/23 22:16:36 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *tab, const char *tab2)
{
	int		i;
	int		nb;
	char	*s1;
	char	*s2;

	s1 = (char *)tab;
	s2 = (char *)tab2;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	nb = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (nb);
}
