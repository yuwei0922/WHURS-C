#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, i;
    scanf_s("%d", &x);
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("%d不是质数", x);
            break;
        }
        if (i == x - 1)
        {
            printf("%d是质数", x);
        }
    }
    return 0;
}