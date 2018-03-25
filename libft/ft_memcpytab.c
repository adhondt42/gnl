/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:47:14 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/27 18:20:19 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpytab(void **dest, const void **src, size_t tab, size_t str)
{
	size_t	i;
	char	**dss;
	char	**srr;

	i = 0;
	dss = (char **)dest;
	srr = (char **)src;
	if (dss == srr || tab == 0)
		return (dss);
	while (tab > 0)
	{
		while (str >= 0)
		{
			dss[tab][str] = srr[tab][str];
			str--;
		}
		tab--;
		str--;
	}
	return (dss);
}
