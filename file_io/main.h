#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
size_t read_textfile(const char *filename, size_t letters);
int create_filez(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void create_file(const char *fromFi, char *toFi);
void errz(int errCod, const char *oFi, char *nFi);
void __close(FILE *sFrm, int sTo, char *bufz);
#endif
