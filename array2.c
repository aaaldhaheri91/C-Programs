// array 2 practice
#include<stdio.h>


int main()
{
    int num[6];
    int i;
    
    for(i=0;i<6;i++)
    {
        printf("Enter a number ");
         scanf("%d",&num[i]);
                   
                      
    }
    for (i=5;i>-1;i--)
    {
        printf("\nthe number is %d ", num[i]);
        if (num[i]==26)
           printf("\nFound 26!");
        
    }
    
 getchar();getchar();
 return 0;   
}
