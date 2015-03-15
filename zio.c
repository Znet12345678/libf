//
//  zio.c
//  libf
//
//  Created by System Administrator on 3/14/15.
//  Copyright (c) 2015 znet. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "master.h"
int fzlen(const char *path)
{
    FILE *f = fopen(path,"r");
    char *buff = malloc(1024);
    int ret = 0;
    while ((fgets(buff,sizeof(buff),f)))
    {
        ret = (ret + zstrlen(buff));
    }
    return ret;
}
void cat(const char *path)
{
    FILE *f = fopen(path,"r");
    char *buff = malloc(1024);
    while ((fgets(buff,sizeof(buff),f)))
    {
        printf("%s",buff);
    }
}
char *fstr(const char *path)
{
    char *buff = malloc(102400);
    FILE *f = fopen(path,"r");
    char *line = malloc(1024);
    while (fgets(line,sizeof(line),f))
    {
        strcat(buff,line);
    }
    return buff;
}
int flinelen(const char *path)
{
    int lines = 0;
    FILE *f = fopen(path,"r");
    char *buff = malloc(1024);
    while (fgets(buff,sizeof(buff),f))
    {
        for (int i = 0; i < zstrlen(buff);i++)
        {
            if (buff[i] == '\n')
            {
                lines+=1;
            }
        }
    }
    return lines;
}
char *fdiff(FILE *f1, FILE *f2)
{
    char *buff1 = malloc(1024);
    char *buff2 = malloc(1024);
    char *fstr1 = malloc(1024000);
    char *fstr2 = malloc(1024000);
    while(fgets(buff1,sizeof(buff1),f1))
    {
        strcat(fstr1,buff1);
    }
    while (fgets(buff2,sizeof(buff2),f2))
    {
        strcat(fstr2,buff2);
    }
    char *diff = malloc (1024000);
    if(zstrlen(fstr1) > zstrlen(fstr2))
    {
        for (int i = 0;i < zstrlen(fstr1);i++)
        {
            if (fstr1[i] != fstr2[i])
            {
                strcat(diff,&fstr1[i]);
            }
            else
            {
                
            }
        }
    }
    else
    {
        for (int i = 0; i < zstrlen(fstr2);i++)
        {
            if (fstr1[i] != fstr2[i])
            {
                strcat(diff,&fstr2[i]);
            }
        }
    }
    return diff;
}
