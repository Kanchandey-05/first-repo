#include<stdio.h>
int main()
{
    int sum=0;
    int arow,acolumn,brow,bcolumn;
    printf("---Matrix Multiplication Calculator---\n\n");
    printf("Enter row and columns of matrix 'A'(ex. 3x3 or 2x3 etc. but don't add space): ");
    scanf("%dx%d",&arow,&acolumn);
    printf("\nNow enter matrix 'A' elements one by one separated by space: \n");
    int a[arow][acolumn];
    for(int i=0;i<arow;i++)
    {
        for(int j=0;j<acolumn;j++)
        {
            scanf("%d",&a[i][j]);
        } 
    } 
    
    printf("\n\nEnter row and columns of matrix 'B'(ex. 3x3 or 2x3 etc. but don't add space): ");
    scanf("%dx%d",&brow,&bcolumn);
    printf("\nNow enter matrix 'B' elements one by one separated by space: \n");
    int b[brow][bcolumn];
    for(int i=0;i<brow;i++)
    {
        for(int j=0;j<bcolumn;j++)
        {
            scanf("%d",&b[i][j]);
        } 
    }        
     
    printf("\n---Multiplication result---\n");
    if(acolumn==brow)
    {
        int product[arow][bcolumn];
        int prod;
        for(int i=0;i<arow;i++)
        {
            for(int l=0;l<bcolumn;l++)
            {
                for(int j=0,k=0;j<acolumn && k<brow;j++,k++)
                {
                    prod= a[i][j] * b[k][l];
                    sum+=prod;
                }   
                printf("%d ",sum);  
                sum=0;
            }
            printf("\n");
        }    
    }     
    
    else
    {
        printf("Matrix can't be multiplied! Try again...\n");
    }
    
    return 0;
}        
        
        
