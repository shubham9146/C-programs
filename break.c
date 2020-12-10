#include <stdio.h>
void main()
{
    int i, num;
    printf("Enter a number");
    scanf("%d", &num);
    i = 2;
    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            printf("Not a Prime number");
            break;
        }
        i++;
    }
    if (i == num)
        printf("Prime number");
}
