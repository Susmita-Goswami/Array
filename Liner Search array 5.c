#include<stdio.h>
int main(void)
{
    int arr[ ]={10,12,15,18,21,3,23,45};
    int value,pos=-1,i;
    printf("enter a number ");
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value==arr[i])
        {
            pos=i+1;break;
        }
        if(pos==-1){
            printf("item is not found");}
            else
                printf("the value is found at %d position",pos);
        }
        return 0;
    }

