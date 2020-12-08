#include <stdio.h>
void main()
{
    int n1, n2, n3;
    printf("Enter any three numbers");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("Maximum = %d", n1);
        }
        else
        {
            printf("Maximum = %d", n3);
        }
    }    

    else
    {
        if(n2 > n3)
        {
            printf("Maximum = %d",n2);
        }
    }
       
    
}
