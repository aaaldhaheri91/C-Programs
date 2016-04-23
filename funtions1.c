// Intro to functions   // 4: integer, 4.0: its a float, which is a decimal

void printGrossPay(float );                     //function prototype
#include<stdio.h>

int main ()                                      // integer is %d
{
    float grossPay, hours, rate;                // float is a decimal, %f
    
    printf("Enter number of hours worked ");
    scanf("%f",&hours);
    printf("Enter hourly rate ");
    scanf("%f",&rate);
    grossPay=hours*rate;
    printGrossPay(grossPay);      //inside paranthesis:arguments           // function call
    
    
    getchar();getchar();
    return 0;
    
}
void printGrossPay(float pay)  //text inside parenthesis: parameters              // printGrossPay: function name     // paranthesis: function header     // gave it a VerbNoun name
{                                                                      // both called function definiton
                                                 // function body 
      printf("Your gross pay is $%.2f ", pay);
      
     
}
