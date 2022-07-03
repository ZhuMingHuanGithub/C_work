/* menuette.c -- 菜单程序 */
#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
    int choice;

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
            case 'a':   printf("Buy low, sell high.\n");
                        break;
            case 'b':   putchar("\a");   /* ANSI */
                        break;
            case 'c':   count();
                        break;
            default:    printf("Program error!\n");
                        break;
        }
    }
    printf("Bye.\n");

    getchar();
    getchar();

    return 0;
}

void count(void)
{
    int n, i;

    printf("Count how far? Enter an integer:\n");
    
}
