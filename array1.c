// Intro to arrays
#include<stdio.h>

    
int main()
{
     int temp[5]; 
     int i;  
     int total=0; 
     int average;
     int count=0;                   
     for(i=0;i<5;i++)                       //[] inside is array size
    {
         printf("Enter a temperature ");
         scanf("%d",&temp[i]);
         total=total+temp[i];
         count=count+1;               //insdie brackets has to be an integer, [i] index subscript
    }
    for(i=0;i<5;i++)
    {
    printf("\n the temp is %d", temp[i]);
    }
    average=total/count;
    printf("\nthe total of tempetarues is %d", total);
    printf("\nthe average of tempetarues is %d", average);
  
 getchar();getchar();
 return 0;   
}
 
