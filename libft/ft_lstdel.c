/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 20:45:16 by adhondt           #+#    #+#             */
/*   Updated: 2017/11/28 20:45:55 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ltemp;
	t_list	*ltemp2;

	ltemp = (*alst);
	while (ltemp)
	{
		ltemp2 = ltemp->next;
		del(ltemp->content, ltemp->content_size);
		free(ltemp);
		ltemp = ltemp2;
	}
	*alst = NULL;
}
