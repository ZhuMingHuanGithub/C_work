/* echo.h -- 重复输入 */
#include <stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
        putchar(ch);

    getchar();
    getchar();

    return 0;
}
