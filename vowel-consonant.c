
 //Programe to count total number of vowel & consonant in C

#include <stdio.h>
#include <string.h>        
#include <ctype.h>         

int main()
{
        char arr[50];
        printf("---Welcome to my Vowel-Consonant Calculator---\n\n");
        printf("Enter a word  or sentence to know total number of vowel & consonant in it: ");
        scanf(" %[^\n]", arr);
        
        int len = strlen(arr);
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<len; i++)
        {    
            char ch = arr[i];
            if(isalpha((unsigned char) ch) != 0)
            {
                switch(ch)
                {
                    case 'a':    case 'e':    case 'i':
                    case 'o':    case 'u':    case 'A':
                    case 'E':    case 'I':    case 'O':
                    case 'U':
                    count1+=1;
                    break;
                    
                    default:
                        count2+=1;
                        break;        
                }
            }
        }    
        
        printf("\nTotal number of vowel & consonant is respectively %d and %d\n", count1, count2);
            
        return 0;
}
