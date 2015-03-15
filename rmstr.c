//
//  rmstr.c
//  libf
//
//  Created by System Administrator on 3/13/15.
//  Copyright (c) 2015 znet. All rights reserved.
//

#include "rmstr.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>

#include "macro.h"
void rmStr(char *a, const char *b)
{
    while ((a = strstr(a,b)))
    {
        memmove(a,a+strlen(b),1+strlen(a+strlen(b)));
    }
}