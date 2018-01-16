#include <stdio.h>
#include "get_next_line.h"

int main(int argc, char **argv)
{
	char *line;
	int ret;
	int fd;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
//		free(line);
	}
	close(fd);
	while (1)
		 ;
	return (0);
}
