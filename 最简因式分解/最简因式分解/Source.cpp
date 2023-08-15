#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
    int x, i;
    scanf_s("%d", &x);
    printf("%d=", x);
    for (i = 2; i < x; i++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                printf("%d*", i);
                x = x / i;
                break;
            }
        }
    }
    printf("%d\n", x);
}