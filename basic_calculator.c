
#include<stdio.h>
int main()
{
     float num1, num2;
     char ch;
     printf("\n---Welcome to our basic calculator---\n\n");
     printf("Here you can perform operation between two numbers only(Decimal value accepeted):-\n\n");
     printf("Please choose which operation you want to perform:\n Multiplication => enter *\n Division => enter /\n Addition =>enter +\n Substraction => enter -\n\nYour choice: ");
     scanf("%c",&ch);
     
     if(ch=='*')
     {
         printf("Multiplication (a*b)\n");
         printf("Please enter first number(number a): ");
         scanf("%f",&num1);
         printf("Please enter second number(number b): ");
         scanf("%f",&num2);
         printf("Calcculated result:%.2f\n",num1*num2);
     }
     else if(ch=='/')
     {
         printf("Division (a/b)\n");
         printf("Please enter first number(number a): ");
         scanf("%f",&num1);
         printf("Please enter second number(number b): ");
         scanf("%f",&num2);
         printf("Calcculated result:%.2f\n",num1/num2);
     }
     
     else if(ch=='+')
     {
         printf("Addition (a+b)\n");
         printf("Please enter first number(number a): ");
         scanf("%f",&num1);
         printf("Please enter second number(number b): ");
         scanf("%f",&num2);
         printf("Calcculated result:%.2f\n",num1*num2);
     }
     
     else if(ch=='-')
     {
         printf("Substraction (a-b)\n");
         printf("Please enter first number(number a): ");
         scanf("%f",&num1);
         printf("Please enter second number(number b): ");
         scanf("%f",&num2);
         printf("Calcculated result:%.2f\n",num1*num2);
     }
     
     else
     {
         printf("Invalid input, try again!\n");
     }
     return 0;
}
