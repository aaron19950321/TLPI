/*************************************************************************
	> File Name: get_num.h
	> Author: aaron
	> Mail: 60360329@163.com
	> Created Time: Sun 26 Mar 2017 04:31:15 PM CST
 ************************************************************************/

#ifndef _GET_NUM_H_
#define _GET_NUM_H_

#define GN_NONNEG         01   /* >= 0 */
#define GN_GT_o           02   /* >  0 */


#define GN_ANY_BASE     0100   /*any base */
#define GN_BASE_8       0200   /*  octal  */
#define GN_BASE_16      0400   /* hexadecimal */

long getLong(const char *arg, int flags, const char *name);

int getInt(const char *arg, int flags, const char *name);
#endif
