/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_sqrt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:18:57 by adhondt           #+#    #+#             */
/*   Updated: 2017/12/06 16:55:10 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_find_next_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i != nb && i * i <= nb)
		i++;
	if (i * i == nb)
		return (i);
	else if (i * i > nb)
		return (ft_find_next_sqrt(nb + 1));
	return (0);
}
