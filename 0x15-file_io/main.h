#ifndef main_h
#define main_h

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *buffer(char *file);
void close_me(int f);
void checkElf(unsigned char *e_ident);
void pmagic(unsigned char *e_ident);
void pclass(unsigned char *e_ident);
void pdata(unsigned char *e_ident);
void pversion(unsigned char *e_ident);
void posabi(unsigned char *e_ident);
void pabi(unsigned char *e_ident);
void ptype(unsigned int e_type, unsigned char *e_ident);
void pentry(unsigned long int e_entry,unsigned char *e_ident);
void cloself(int elf);

#endif
