/* longstrg.c -- 打印较长的字符串 */
#include <stdio.h>
int main(void)
{
    printf("Here is one way to print a ");
    printf("long string.\n");
    printf("Here is another way to print a \
long string.\n");
    printf("Here is the newest way to print a "
            "long string.\n");      /* ANSI C */
    getchar();

    return 0;
}
