#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <elf.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

int main(int argc, char *argv[]);
int usage_error(void);
int open_file(const char *filename, int flags);
void read_error(int fd, const char *filename);
void write_error(int fd, const char *filename);
void close_error(int fd);
void print_error(const char *message, const char *file);
void copy_file(const char *file_from, const char *file_to);



#endif /* MAIN_H */
