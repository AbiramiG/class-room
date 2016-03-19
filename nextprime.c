#include <stdio.h>
 
int main()
{
    int n,count=0;
    printf("enter the number");
    scanf("%d",n);
    int i=0,j=0;
    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        {
            printf("%d",i);
            break;          
        }
    }
    return 0;
}
