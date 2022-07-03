/* lethead1.c */
#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void); /* 函数原型 */

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();      /* 使用函数 */

    getchar();

    return 0;
}

void starbar(void)
{
    int count;      /* 定义函数 */                                                                                              

    for (count = 2; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}
