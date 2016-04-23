// Using an if statments
void printAge(int);
#include<stdio.h>
int main()
{
    int age;
    
    printf("Enter your age ");
    scanf("%d",&age);
   
    printAge(age);
    
    
    getchar();getchar();
    return 0;
    
    
}
void printAge(int age)
{
     if(age >= 18)
           printf("You are an adult");
    else
           printf("You are a child");
     
     
}
