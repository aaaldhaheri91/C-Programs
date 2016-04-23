// Intro to functions   // 4: integer, 4.0: its a float, which is a decimal
#include<stdio.h>

int main ()
{
    float grossPay, hours, rate;
    
    printf("Enter number of hours worked");
    scanf("%f",&hours);
    printf("Enter hourly rate");
    scanf("%f",&rate);
    grossPay=hours*rate;
    printf("Your gross pay is %f ", grossPay);
    
    
    getchar();getchar();
    return 0;
    
}
