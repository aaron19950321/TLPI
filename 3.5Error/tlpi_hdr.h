/*************************************************************************
	> File Name: tlpi_hdr.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Mar 2017 01:39:31 PM CST
 ************************************************************************/

#ifndef _TLPI_HDR_H_
#define _TLPI_HDR_H_
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.c>
#include<unistd.h>
#include<errno.h>
#include<string.h>

#include"get_num.h"   //Declare our function for handling numeric argument (getInt(),getLing())

#include"error_functions.h"  //Declare our error-handling function

typedef enum {
    FALSE,
    TRUE
}Boolean;

#define min(m,n) ((m)<(n)?(m):(n));
#define max(m,n) ((m)>(n)?(m):(n));


#endif
