//write a program that can take sum numbers and finds sum and average

#include<stdio.h>
int main(void)
{
    int array[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+array[i];

    }
    printf("%d\n",sum);
    printf("%d",sum/4);
    return 0;
}
