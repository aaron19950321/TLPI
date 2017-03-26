/*************************************************************************
	> File Name: error_functions.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Mar 2017 01:46:12 PM CST
 ************************************************************************/

#ifndef _ERROR_FUNCTIONS_H_
#define _ERROR_FUNCTIONS_H_

void errMsg(const char *format,...);

#ifdef __GUNC__
#define NORETURN __attribute__ ((__noreturn))
#else
#define NORETURN
#endif

void errExit(const char *format,...) NORETURN;

void err_exit(const char * format,...) NORETURN;

void errExitEN(int errnum, const char *format,...) NORETURN;

void fatal(const char *format,...) NORETURN;

void usageErr(const char *format,...) NORETURN;

void cmdLineErr(const char *format,...) NORETURN;

#endif
