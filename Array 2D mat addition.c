#include<stdio.h>
int main(void)
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,numberOfRows,numberOfCols;
    printf("enter the number if rows and columns ");
    scanf("%d  %d",&numberOfRows, &numberOfCols);

    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            {
                printf("A[%d][%d] =",i,j);
                scanf("%d",&A[i][j]);
            }
            printf("\n");
        }
        printf("A=  ");
        for(i=0; i<numberOfRows ;i++)
        {
            printf("\t");
            for(j=0; j<numberOfCols; j++)
            {

                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
        for(i=0; i<numberOfRows; i++)
        {
            for(j=0; j<numberOfCols; j++)
            {
                printf("B[%d][%d] =",i,j);
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }
        printf("B=  ");
        for(i=0; i<numberOfRows; i++)
        {
            printf("\t");
            for(j=0; j<numberOfCols; j++)
            {

                printf("%d ",B[i][j]);
            }
            printf("\n");
        }
         printf("\A+B=  ");
        for(i=0; i<numberOfRows; i++)
        {

            for(j=0; j<numberOfCols; j++)
            {

               printf("%d ",C[i][j]);
            }
            printf("\n");
        }


    }


        return 0;
    }




