#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content) 
{
	int fd;
    if (filename == NULL) {
        return -1;
    }

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1) {
        return -1;
    }

    if (text_content != NULL) {
        ssize_t write_count = write(fd, text_content, strlen(text_content));
        if (write_count == -1) {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
