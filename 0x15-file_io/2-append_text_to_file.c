#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content) {
    int fd;
    if (filename == NULL) {
        return -1;
    }

    fd = open(filename, O_WRONLY | O_APPEND);
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
