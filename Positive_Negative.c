#include <stdio.h>
 
void main()
{
    int num_1;
 
    printf("Enter a number: \n");
    scanf("%d", &num_1);
    if (num_1 > 0)
        printf("%d is a positive number \n", num_1);
    else if (num_1 < 0)
        printf("%d is a negative number \n", num_1);
}
