//Pointers first program

#include<stdio.h>
void calculate(float,float,float,float*,float*);
int main()
{
	float price1, price2, price3, total=0, avg=0;
	price1=10.50;
	price2=8.50;
	price3=6.50;
	
	calculate(price1, price2, price3, &total, &avg);
	printf("The total is %.2f",total);
	printf("\nThe average is %.2f",avg);
	
	
	
	
	
	
	getchar();getchar();
	return 0;
	
}
void calculate(float p1, float p2, float p3, float *total, float *avg)
{

	*total=p1+p2+p3;
	*avg=*total/3;
}

