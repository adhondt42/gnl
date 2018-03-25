/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:44:47 by adhondt           #+#    #+#             */
/*   Updated: 2018/03/22 12:44:02 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_neg(int *n, int *count, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*count += 1;
		*neg = 1;
	}
	else
		*neg = 0;
}

char		*ft_itoa(int n)
{
	int		count;
	int		j;
	char	*num;
	int		neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = 1;
	ft_neg(&n, &count, &neg);
	j = n;
	while (j /= 10)
		count++;
	if ((num = (char *)malloc(sizeof(char) * count + 1)) == NULL)
		return (NULL);
	num[count] = '\0';
	while (count-- >= 0)
	{
		num[count] = (n % 10) + '0';
		n /= 10;
	}
	if (neg == 1)
		num[0] = '-';
	return (num);
}
