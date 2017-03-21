/*************************************************************************
	> File Name: checkGlibc.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 21 Mar 2017 09:29:45 AM CST
 ************************************************************************/

#include<stdio.h>

#include<gun/libc-version.h>

int main()
{
    char * p = gun_get_libc_version();
    printf("%s\n",*p);
    return 0;
}
