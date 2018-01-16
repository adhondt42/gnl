#include "../get_next_line.h"

char	*ft_keepstr(char *str, char *instr)
{
	char *ptr;
	int i;

	ptr = str;
	i = 0;
	while (ptr != instr)
	{
		ptr++;
		i++;
	}
	if (i == 0)
		return ("\0");
	return (ft_strsub(str, 0, i));
}

int		ft_get_line(char **save, char **line)
{
	if (ft_strchr(*save, '\n'))
	{
		*line = ft_keepstr(*save, ft_strchr(*save, '\n'));
		*save = ft_strchr(*save, '\n') + 1;
		return (1);
	}
	else if (ft_strlen(*save) != 0)
	{
		*line = ft_keepstr(*save, ft_strchr(*save, '\0'));
		*save = ft_strchr(*save, '\0');
		return (1);
	}
	free(*save);
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	int ret;
	static char *save;
	char buf[BUFF_SIZE + 1];
	char *fcontent;
	char *tmp;
	int n;

	tmp = NULL;
	n = 0;
	if (fd == -1 || !line || BUFF_SIZE < 1)
		return (-1);
	fcontent = NULL;
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		n = 1;
		buf[ret] = '\0';
		if (fcontent  == NULL)
			fcontent = ft_strdup(buf);
		else
		{
			tmp = ft_strjoin(fcontent, buf);
			free(fcontent);
			fcontent = tmp;
		}
	}
	if (n == 1)
	{
		save = ft_strdup(fcontent);
		free(fcontent);
	}
	if (ret == -1)
		return (-1);
	if (ft_strchr(save, '\n'))
	{
		*line = ft_keepstr(save, ft_strchr(save, '\n'));
		save = ft_strchr(save, '\n') + 1;
		return (1);
	}
	else if (ft_strlen(save) != 0)
	{
		*line = ft_keepstr(save, ft_strchr(save, '\0'));
		save = ft_strchr(save, '\0');
		return (1);
	}
	return (0);
}

