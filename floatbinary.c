#include<stdio.h>
int main()
{
	//float num;				//(4bytes)						
	double num;
	double number;			//(8bytes)							
	num=56.06;
	number=60.00;
	//number=number-num+.005; to get make it round to 3.94
	number=number-num;
	printf("\n%f", num);
	printf("\n%.15lf",number);
	getchar();getchar();
	return 0;

}	
