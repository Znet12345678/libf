//
//  bchar.c
//  libf
//
//  Created by System Administrator on 3/13/15.
//  Copyright (c) 2015 znet. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include "macro.h"
char *bchar(char *a,char b){
    for (int i = 0; i < strlen(a) - 1;i++)
    {
        if(a[i] == b)
        {
            unsigned long l = strlen(a) - i;
            char *cpy = (char*)malloc(l);
            strcpy(cpy,a + i + 1);
            return cpy;
        }
    }
}
