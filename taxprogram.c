//Property tax program
//Ahmed Aldhaheri	

#include<stdio.h>

float inputTotalSales();
void calculateTaxes (float*, float*, float);
void displayTaxes(float, float, float);
int main()
{
	float stateTax, countyTax, total=0, monthTotal;
	
	monthTotal=inputTotalSales();
	calculateTaxes(&stateTax,&countyTax,monthTotal);
	total=stateTax+countyTax;
	displayTaxes(stateTax,countyTax,total);
	
	
	
	getchar();getchar();
	return 0;
}

float inputTotalSales()
{
	float monthTotal;
	printf("Please enert the total sales for the month ");
	scanf("%f",&monthTotal);
	return monthTotal;
	
}
void calculateTaxes(float *stateTaxPt, float *countyTaxPt, float monthTotal)
{

	*stateTaxPt=.04 * monthTotal;
	*countyTaxPt=.02 * monthTotal;

	
}
void displayTaxes(float stateTax, float countyTax, float total)
{
	printf("The state total tax is %.2f", stateTax);
	printf("\nThe county total tax is %.2f ", countyTax);
	printf("\nThe total sales tax is %.2f ", total);
	
	
}
