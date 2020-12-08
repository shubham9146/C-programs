#include <stdio.h>
#include <math.h>
void main()
{
    int x, y, result;
    printf("Enter two umbers x and y");
    scanf("%d %d", &x, &y);
    result = pow(x, y);
    printf("Result = %d", result);
}
