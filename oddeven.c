#include<stdio.h>
int oddeven(int a[],int o[],int e[],int n)
{
    int i,ie=0,io=0;
    for(i=0;i<n;i++)
    {
        if((a[i]%2)==0)
        {
            e[ie]=a[i];
            ie++;
        }
        else
        {
            o[io]=a[i];
            io++;
        }
    }
    return ie-1;
}
int main()
{
    int a[20],n,o[20],e[20],odd,i,t;
    printf("\nenter the array size:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=oddeven(a,o,e,n);
    printf("even array:");
    for(i=0;i<=t;i++)
    {
        printf("\n%d",e[i]);
    }
    odd=n-t;
    printf("\nodd array:");
    for(i=0;i<odd-1;i++)
    {
        printf("\n%d",o[i]);
    }
    return 0;
}
