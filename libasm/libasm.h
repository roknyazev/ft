//
// Created by Wolmer Rudy on 11/11/20.
//

#ifndef LIBASM_LIBASM_H
#define LIBASM_LIBASM_H

#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

ssize_t     ft_read(int fd, char *buf, int size);
ssize_t     ft_write(int fd, char *buf, int size);
int     ft_strcmp(char *str1, char *str2);
char    *ft_strcpy(char *dst, char *src);
char    *ft_strdup(char *str);
unsigned long     ft_strlen(char *str);

#endif //LIBASM_LIBASM_H
