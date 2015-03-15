//
//  master.h
//  libf
//
//  Created by System Administrator on 3/14/15.
//  Copyright (c) 2015 znet. All rights reserved.
//

#ifndef libf_master_h
#define libf_master_h
#include <sys/types.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef const char * String;
typedef int _socket;
/*Disfunctional*/
void rmStr(const char *a, const char *b);
/*End*/
char *bchar(char *a, char b);
int cmpstr(const char *a, const char *b);
int ncmpstr(const char *a, const char *b, int c);
unsigned long zstrlen(char *a);
int add(int a, int b);
int sub(int a, int b);
int divide(int a, int b);
int mult(int a, int b);
int factorial(int a);
int repSum(int begin, int end, int function);
/*Disfunctional*/
void zstrcpy(char *src,char *cpy);
/*end*/
int fzlen(const char *path);
char *fstr(const char *path);
void cat(const char *path);
int flinelen(const char *path);
char *fdiff(FILE *f1,FILE *f2);
int bInStr(char *src, char *search);
#endif
