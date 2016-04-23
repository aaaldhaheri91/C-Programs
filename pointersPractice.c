// pointers
#include<stdio.h>

					//global variable
void getNumbers(float*, float*);
float multiplyNumbers(float, float);
void displayNumbers(float, float, float);

int main()
{
	float num1,num2,product;
	
	getNumbers(&num1,&num2);
	product=multiplyNumbers(num1,num2);
	displayNumbers(num1,num2,product);
	
	
	getchar();getchar();
	return 0;
}

void getNumbers(float *num1P, float *num2P)

{
	float num1, num2;
	printf("Enter a number");
	scanf("%f",&num1);
	printf("Enter a number");
	scanf("%f",&num2);
	*num1P=num1;
	*num2P=num2;
}

float multiplyNumbers(float num1, float num2 )
{
	float product;
	product=num1*num2;
	return product;
	
}

void displayNumbers(float num1, float num2, float product)
{
	
	printf("The product of %.2f and %.2f is %.2f",num1,num2,product);
}
