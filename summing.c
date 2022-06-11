/* summing.c -- 根据用户键入的整数求和 */
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;         /* 把 sum 初始化为 0  */
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 0)    /* == 的意思是“等于”   */
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    getchar();
    getchar();

    return 0;
}
