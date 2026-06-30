 #include <stdio.h>
int main()
{
    int num;
    char extra;
    printf("Enter the number which table you want to see: ");
    if( scanf("%d%c",&num, &extra)==2 && extra=='\n')
    {
        if(num>0)
        {
            for(int i=1;i<=10;i++)
            {
                 printf("    %d * %d = %d\n", num ,i , num*i );
            }
        }
        else
        {
            printf("Please enter positive numbers only...\n");
        }                 
    }
    else
    {
        printf("Invalid input! Please enter number only...\n");
    }   
  
    return 0;
}
