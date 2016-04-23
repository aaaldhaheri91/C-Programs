// Math function

#include<stdio.h>
int addNumbers(int, int);
int subtractNumbers(int, int); 
int multiplyNumbers(int, int);   
int divideNumbers(int, int); 
int modulusNumbers(int, int);  
int main()
{
    int num1, num2, total;
    char choice;
   
    
    printf("Enter a number ");
    scanf("%d%c%d",&num1,&choice,&num2);
    
    
    switch(choice)
{
    case'+': 
             total=addNumbers(num1,num2);
             break;
    case'-': 
             total=subtractNumbers(num1,num2);
             break; 
    case'*': 
             total=multiplyNumbers(num1,num2);
             break;
    case'/': 
             total=divideNumbers(num1,num2);
             break;                 
    default:
            printf("Invalid Choice");
}
     printf("\n Your answer is %d ",total);
     
    
    
    
    /* if (choice == 'A')                                  // single character, single qoute
       total = num1+num2;
    
    else if (choice == 'S')
         total = num1-num2;
    */     
   
    
    getchar();getchar();
    return 0;
    
    
    
}

int addNumbers(int num1, int num2)                           // void: return data type, with void we cannot throw anything back to main
{    
     int sum;
     
     sum=num1+num2;
     return sum;                                              // throwing it back to main
          
     
}
int subtractNumbers(int num1, int num2)
{
    int sum;
    
    sum=num1-num2;
    return sum;
}
int multiplyNumbers(int num1, int num2)
{
    int sum;
    
    sum=num1*num2;
    return sum;
}
int divideNumbers(int num1, int num2)
{
    int sum;
    
    sum=num1/num2;
    return sum;
}

