 
//Simple natural calculator programe in C:

#include <stdio.h>
int main()
{
    float num1,num2;
    char ch;
    printf("---Welcome to my calculator---\n");
    printf("\nHere you can perform simple operations llike addition, substraction, multiplication and division only!\n\n");
    printf("Enter your expression(e.g. 5*3 or 5/3): ");
    
   if(scanf("%f %c%f",&num1,&ch,&num2)==3)    //checks if user inputs specified format
   { 
        if(ch=='*')
        {
            float res1= num1*num2;
            printf("%.2f*%.2f = %.2f\n", num1, num2, res1);
        }    
        
        else if(ch=='/')
        {
            
            if(num2!=0)
            {
                 float res2= num1/num2;
                 printf("%.2f/%.2f = %.2f\n", num1, num2, res2);
            }
            else
            {
                printf("Can't divide by zero!\n");
            }        
        }    
        
        else if(ch=='+')
        {
            float res3= num1+num2;
            printf("%.2f+%.2f = %.2f\n", num1, num2, res3);
        }    
        
        else if(ch=='-')
        {
            float res4= num1-num2;
            printf("%.2f-%.2f = %.2f\n", num1, num2, res4);
        }    
        
        else
        {
            printf("\nMy calculator can't perform this operation! Please choose your desired one from the list! \n");
        }
   }    
    
   else
   {
       printf("\nInvalid input, please enter vaild expression as refered above!\n");
   }
    
   return 0;
}
