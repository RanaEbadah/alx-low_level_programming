#ifndef MAIN_H
#define MAIN_H
#define BUF_SIZE 1024

#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include <string.h>
#include<fcntl.h>
#include<unistd.h>


/*functions*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void closeFiles(int fd);
char *createBuffer(char *file);
int append_text_to_file(const char *filename, char *text_content);




#endif /* MAIN_H */
