// Demonstrate input, process, output

#include<stdio.h>
int main()
{
    int birthYear;   //declaring a variable          // Rules for naming variables: 1. Can not began w/ number 
    int currentYear, age;                               // 2. can not have an special characters (only letters, digits, under_score)
                                                   // 3. cannot be a reserved word(keyword): language characters
                                                   // 4. No spaces!!
                                                      
    
    printf("Enter your birth year ");
    scanf("%d" ,&birthYear ); 
    printf("Enter the current year ");                // data types:  int  %d
    scanf("%d",&currentYear);  
    age=currentYear-birthYear;
    printf("This year you will be %d years old", age);       // &: address operator
    
    
    getchar(); getchar();
    return 0;
    
}
