  
 //Program to calculate factorial of a user input number

#include <stdio.h>
int main()
{
    int num, fact=1;
    char extra;
    printf("Enter the number which factorial you want to see: ");
 
    if(scanf("%d%c", &num,&extra)==2 && extra=='\n')
    {
        if(num>0)
        {
            for(int i=1; i<=num; i++)
            {
                fact*=i;
            }
            printf("Calculated, %d! = %d\n", num, fact);
        }
        
        else if(num==0)
        {
            printf("Calculated 0! = 1\n");
        }
        
        else
        {
             printf("Determination of factorial is not possible for negative number\n");
        }
    }
    
    else
    {
         printf("Invalid input! Please try again and enter number only!\n");
    }                                             
                                                    
    return 0;
}
