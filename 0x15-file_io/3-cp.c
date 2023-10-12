#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
/**
* main - main
* @argc: arg count
* @argv: arg vector
* Return: return value
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd_count, wr_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3) {
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97); }
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1){
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1){
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		return (99);}
	while ((rd_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr_count = write(fd_to, buffer, rd_count);
		if (wr_count == -1){
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			return (99);}
	}
	if (rd_count == -1){
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		return (98);}
	if (close(fd_from) == -1 || close(fd_to) == -1){
		dprintf(2, "Error: Can't %d\n", (close(fd_from) == -1) ? fd_from : fd_to);
		return (100);}
	return (0);
}
