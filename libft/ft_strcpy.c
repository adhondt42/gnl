/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:31:53 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/23 22:21:16 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *str)
{
	int		j;

	j = 0;
	while (str[j])
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}