// Gas and Car wash Program
//Ahmed Aldhaheri

#include<stdio.h>
void displayMenu();
int getInfo(int*, float*, char*);
float getGasRate(int, float[], float*);
float getWashRate(char,int,float*, float*);
float calcAmount(float, float, float, char);
int main()

{
	int gasGrade;
	float numberGallons,perGalRate,perWashRate,total;
	char choiceWash;
	float gasPrices[4]={3.999,4.099,4.199,4.299};
	float washPrices[4]={3.50,3.00,3.00,2.50};
	
	
	displayMenu();
	getInfo(&gasGrade,&numberGallons,&choiceWash);
	getGasRate(gasGrade,gasPrices,&perGalRate);
	getWashRate(choiceWash,gasGrade,washPrices, &perWashRate);
	total=calcAmount(perGalRate, numberGallons, perWashRate, choiceWash);
	getchar();getchar();
	return 0;
}

void displayMenu()
{
	printf("Welcome to Sunoco\n");
	printf("Types of gas(economy, regular, mid-grade, and premium)");
	
}
int getInfo(int *gasGradeP, float *numberGallonsP, char *choiceWashP)
{
	int gasGrade;
	float numberGallons;
	char choiceWash;
	do {
	
	printf("\nPlease choose form the following gas grades: \n press 1 for economy \n press 2 for regular \n press 3 for mid-grade \n press 4 for preimum\n");
	scanf("%d",&gasGrade);
	if (gasGrade>4 || gasGrade<1)
	{
		printf("Invalid choice, Please choose from choice 1-4");
		continue;
	}
	printf("Please enter the number of gallons you would like to pump: ");
	scanf("%f",&numberGallons);
	if(numberGallons<0)
	{
		printf("Invalid number, please ener a valid number");
		continue;
	}
	
	printf("would you like a car wash press 'Y' or 'y' if YES, or press 'N' or 'n' if NO:\n ");
	scanf("\n%c",&choiceWash);
	
	if (choiceWash!='Y' && choiceWash!='y' && choiceWash!='N' && choiceWash!='n')
	{
		printf("Invalid choice, please enter 'y' if yes or 'n' if no");
		continue;
	}
	break;
	} while(1);
	*gasGradeP=gasGrade;
	*numberGallonsP=numberGallons;
	*choiceWashP=choiceWash;
}	

float getGasRate(int gasGrade, float *gasPrices, float *perGalRateP)
{
	*perGalRateP=*(gasPrices + (gasGrade-1));
	printf("Your per gallon rate is %.3f",*perGalRateP);
}

float getWashRate(char choiceWash ,int gasGrade,float *washPrices, float *perWashRateP)
{
	
	*perWashRateP=*(washPrices+(gasGrade-1));
	
	if (choiceWash!='y' && choiceWash!='Y')
	{
		*perWashRateP= 0;
	}
	
	printf("\nYour car wash cost is %.2f",*perWashRateP);
}

float calcAmount(float perGalRate, float numberGallons, float perWashRate, char choiceWash)
{
	float total;
	float discount;
	
	
	
	if (numberGallons>=10 && choiceWash=='Y' || choiceWash=='y')
	{
		discount=perWashRate-1;
		total=(perGalRate*numberGallons)+discount;
	}
	if (numberGallons>=10 && choiceWash!='Y' || choiceWash!='y')
	{
		total=(perGalRate*numberGallons)+perWashRate;
		
	}
	
	else if (numberGallons<10)
	{
		total=(perGalRate*numberGallons)+perWashRate;
	}
	printf("\nIndividual total is %.2f",total);
	return total;
}

