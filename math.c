//
//  math.c
//  libf
//
//  Created by System Administrator on 3/14/15.
//  Copyright (c) 2015 znet. All rights reserved.
//

#include <stdio.h>
#include "master.h"
int add(int a, int b)
{
    return (a+b);
}
int sub(int a, int b)
{
    return (a-b);
}
int divide(int a, int b)
{
    return (a/b);
}
int mult(int a, int b)
{
    return (a*b);
}
int factorial(int a)
{
    int ret = 1;
    for (int i = 0; i < a; i++)
    {
        ret = (ret * i);
    }
    return ret;
}
int repSum(int begin, int end, int function)
{
    int ret = 0;
    for (begin;begin < end;begin++)
    {
        ret = (ret + function);
    }
    return ret;
}
