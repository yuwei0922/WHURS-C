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
            printf("%d��������", x);
            break;
        }
        if (i == x - 1)
        {
            printf("%d������", x);
        }
    }
    return 0;
}