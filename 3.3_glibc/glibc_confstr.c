/*************************************************************************
	> File Name: glibc_confstr.c
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Tue 21 Mar 2017 01:51:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h> //confstr

int main(int argc,char **argv[])
{
    char *pathbuf,
        *gun_libpthread_version_buf,
        *gun_libc_version_buf;
    size_t n;

    n = confstr(_CS_PATH,NULL,(size_t)0);
    pathbuf = malloc(n);
    if ( NULL == pathbuf )
        abort();

    confstr(_CS_PATH,pathbuf,n);
    printf("_CS_PATH,a value for the PATH variable:%s\n",pathbuf);
    free(pathbuf);
    pathbuf = NULL;

    n = confstr(_CS_GNU_LIBPTHREAD_VERSION,NULL,(size_t)0);
    if (n > 0)
    {
        gun_libpthread_version_buf = malloc(n);
    }
    if (NULL == gun_libpthread_version_buf)
        abort();
    confstr(_CS_GNU_LIBPTHREAD_VERSION,gun_libpthread_version_buf,n);
    printf("_CS_GNU_LIBPTHREAD_VERSION,the POSIX implementation supplied by the C libary:%s\n",gun_libpthread_version_buf);
    free(gun_libpthread_version_buf);
    gun_libpthread_version_buf = NULL;


    n = confstr(_CS_GNU_LIBC_VERSION,NULL,(size_t)0);
    if (n > 0)
    {
        gun_libc_version_buf = malloc(n);
    }
    if (NULL == gun_libc_version_buf)
        abort();
    confstr(_CS_GNU_LIBC_VERSION,gun_libc_version_buf,n);
    printf("_CS_GNU_LIBC_VERSION,the GUN C libary version on this system :%s\n",gun_libc_version_buf);
    free(gun_libc_version_buf);
    pathbuf = NULL;
}
