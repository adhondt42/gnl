/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhondt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 18:31:07 by adhondt           #+#    #+#             */
/*   Updated: 2018/01/05 13:53:58 by adhondt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
	int				i;
	//int				i;
	static char		*save;

	i = 0;
	buf[BUFF_SIZE] = 0;
	if (fd < 0)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) >= 0)
	{
		if (ft_strlen(buf) == 1 && ret == 0)
		{
		printf("FINI");
		return (0);
		}
		if (ret < BUFF_SIZE)
		{
//			printf("$1\n");
			if (save)
			{
//				printf("$2\n");
				save = ft_strjoin(save, buf);
				if (ft_strchr(save, '\n'))
				{
					*line = ft_strcdup(save, '\n');
					save = ft_strdup(ft_strchr(save, '\n') + 1);
					return (1);
				}
				else if (!ft_strchr(buf, '\n'))
				{
					*line = ft_strjoin(save, buf);
					return (1);
				}
			}
			else if (!save)
			{
//				printf("$3\n");
				if (ft_strchr(buf, '\n'))
				{
//					printf("$4\n");
					*line = ft_strcdup(buf, '\n');
					save = ft_strdup(ft_strchr(buf, '\n') + 1);
					return (1);
				}
				else if (!ft_strchr(buf, '\n'))
				{
//					printf("$5\n");
					*line = (ft_strdup(buf));
					return (1);
				}
			}
		}
		else if (!(ft_strchr(buf, '\n')))
		{
//			printf("$6\n");
			save = (save) ? (ft_strjoin(save, buf)) : (ft_strdup(buf));
		}
		else if (ft_strchr(buf, '\n'))
		{
//			printf("$7\n");
			*line = (save) ? ft_strjoin(save, ft_strcdup(buf, '\n')) : \
					ft_strcdup(buf, '\n');
			save = ft_strdup(ft_strchr(buf, '\n') + 1);
			return (1);
		}
	}
	return (1);
}
