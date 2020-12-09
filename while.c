#include<stdio.h>
void main()
{
    int p,n,count;
    float r,si;

    count = 1;
    while(count<=3)
    {
        printf("\nEnter values of principle,n and r\n");
        scanf("%d %d %f",&p,&n,&r);
        si = p*n*r/100;
        printf("Simple intrest =Rs %f ",si);
        count = count+1;
    }
}
