/* addemup.c -- 几种常见的语句 */
#include <stdio.h>
int main(void)
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20)
<<<<<<< HEAD
    {
        sum = sum + count;
        printf("sum = %d\n", sum);
    }
}
=======
        sum = sum + count;
    printf("sum = %d\n", sum);

    getchar();

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 72156fbe085eb417450fab444975b6160feb2ca9
>>>>>>> 63fc1ab7aab5de252f16fe9f9d982643891a70b8
