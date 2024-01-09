#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#include <time.h>
#include <sys/types.h>
#include <dirent.h>
#include <signal.h>
#include <ctype.h>

#define BUFF_SIZE 1025

#ifndef SHEET_H
#define SHEET_H
    struct sheet{int **data; int dim[2];};
    int* prompt();
    void err(int i, char*message);
#endif