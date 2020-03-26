#include "get_next_line.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd;
	int fd2;
	char *line;

	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);

	get_next_line(fd, &line);
	get_next_line(fd2, &line);
	close(fd);
	close(fd2);
	return (0);
}
