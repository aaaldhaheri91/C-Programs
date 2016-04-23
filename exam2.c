//exam 2
//Ahmed Aldhaheri
//to calculate users monthly rent
#include<stdio.h>
void getData(int*, int*);
int main()
{
	
	int bedrooms,pets,i,x;
	char name[81];
	float monthlyRent[3]={500,650,800};
	float bedroomsRental,petsTotal,total;
	
	printf("Please enter your full name: ");
	gets(name);
	
	getData(&bedrooms,&pets);
	
	
	petsTotal=pets*9.50;
	total=monthlyRent[bedrooms-1]+petsTotal;
	
	printf("Rental Contract for %s\n",name);
	printf("\nRent for a %d bedroom is: $%.2f",bedrooms,monthlyRent[bedrooms-1]);
	printf("\nAdditional cost for pets: $%.2f",petsTotal);
	printf("\nYour total rent will be: $%.2f",total);
	
	getchar();getchar();
	return 0;
	
}

void getData(int *bedroomsP, int *petsP)
{
	int bedrooms, pets;
	
	
	do {
	
	printf("How many bedrooms wouold you like 1-3? ");
	scanf("%d",&bedrooms);
	if (bedrooms<1 || bedrooms>3)
	{
		printf("Invalid choice, Please choose from 1-3");
		continue;
	}
	
	printf("How many pets do you have: ");
	scanf("%d",&pets);
	if (pets<0)
	{
		printf("Invalid choice please choose a valid number");
		continue;
	}
	break;
} while(1);
*bedroomsP=bedrooms;
*petsP=pets;

	
}
