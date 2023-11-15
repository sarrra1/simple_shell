#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <stddef.h>
#include <stddef.h>
#define DELIM " \t\n"
extern char **environ;

char *see_line(void);
char **shell_tok(char *cmod);
int execu__te(char **sar_cmd, char **argv, int shel);
char *envir_get(char *svar);
char *path_get(char *sara_cmd);
char *Our_strinto(char *strin_sar, const char *delim_dan);

int check_positive_numb(char *string_dan);
int MY_atoi(char *string_dan);
int shell_built(char *line);
void make_built(char **line, char **argv, int *updata, int shel);
void fun_exit(char **line, char **argv, int *updata, int shel);
void make_envir(char **line, int *updata);

int strin_cmp(char *c1, char *c2);
int strin_len(char *q);
char *strin_cpy(char *skhy, char *hd);
char *strin_cat(char *skhy, char *hd);
char *strin_dup(const char *soma);

void array_freedom(char **sarrad);
void function_error(char *type, char *dmma, int shel);
void change_sttr(char *string_dan, int leng);
char *MY_itoa(int n);

#endif
