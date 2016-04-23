// for loops
#include<stdio.h>
int main()
{
    int x, average;
    int temp;
    int total=0;    //intialize a variable
    for (x = 1; x <= 5;x++)
    {
        printf("Enter a temperature ");
        scanf("%d",&temp); 
        total=total+temp; 
        
        
        
     }                                        
    
    printf("Total is %d ",total);
    average=total/5;
    printf("\nThe average is %d",average);
    
    getchar();getchar();
    return 0;
    
    
}
