#include<stdio.h>
int main(void)
{
    int a[10],n,i,fib,first,second;
    a[0]=0;
    a[1]=1;
    printf("enter the number ");
    scanf("%d",n);
    for(i=0;i<=n;i++)
    {
        fib=first+second;
        first=second;
        second=fib;

    }
    printf("%d",fib);
    return 0;

}
