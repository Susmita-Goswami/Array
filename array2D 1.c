#include<stdio.h>
int main(void)
{
    int A[3][4]= { {5,6,7,8},{15,16,17,18},{21,22,23,24}
    };
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\n",A[i][j]);
        }
    }
getch();
}
