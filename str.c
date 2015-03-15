//
//  str.c
//  libf
//
//  Created by System Administrator on 3/14/15.
//  Copyright (c) 2015 znet. All rights reserved.
//

#include <stdio.h>
#include "master.h"
unsigned long zstrlen(char *a)
{
    unsigned long size = 0;
    for (int i = 0; i < sizeof(a);i++)
    {
        if (a[i] == '\0')
        {
            break;
        }
        else
        {
            size+=1;
        }
    }
    return size;
}
int cmpstr(const char *a,const char *b)
{
    unsigned long testcmp = 0;
    if (zstrlen(a) != zstrlen(b))
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < zstrlen(a);i++)
        {
            if (a[i] == b[i])
            {
                testcmp = (testcmp + 1);
            }
            else
            {
                return 0;
            }
        }
    }
    if (testcmp == zstrlen(a))
    {
        return 1;
    }
}
int ncmpstr(const char *a, const char *b,int c)
{
    int testcmp = 0;
    for(int i = 0; i < c; i++)
    {
        if (a[i] == b[i])
        {
            testcmp+=1;
        }
        else
        {
            return 0;
        }
    }
    if(testcmp == c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*Disfunctional*/
void zstrcpy(char *src, char *str)
{
    int len = zstrlen(src);
    for (int i = 1; i  <= zstrlen(str);i++)
    {
        src[len + i] = str[i];
    }
}
int bInStr(char *orig, char *search)
{
    int nextCharSearch[zstrlen(search)];
    if (zstrlen(search) > zstrlen(orig))
        {
            return -1;
        }
        else
        {
            for (int i = 0; i < zstrlen(search);i++)
            {
                for (int i1 = 0; i1 <zstrlen(orig);i1++)
                {
                        if(orig[i1] == search[i])
                        {
                            nextCharSearch[i] += 1;

                        }
                }
            }
        }
        int len = 0;
        for (int i = 0; i < zstrlen(search);i++)
        {
            if(nextCharSearch[i] == 1)
            {
                len+=1;
            }
        }
        if (len == zstrlen(search))
        {
            return 1;
        }
        else
        {
            return 0;
        }
}