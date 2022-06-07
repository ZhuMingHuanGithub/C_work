/* addemup.c -- 几种常见的语句 */
#include <stdio.h>
int main(void)                   /* 计算前 20 个整数的和   */
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20)
        sum = sum + count;
    printf("sum = %d\n", sum);

    getchar();

    return 0;
}