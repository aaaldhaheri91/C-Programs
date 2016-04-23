//Pointer notation 

#include<stdio.h>
void displayPrices(float*);
int main()
{
	float rent[4]={500.00,650.00,800.00,950.00};
	
	displayPrices(rent);
	
	getchar();getchar();
	return 0;
}

void displayPrices(float *rent)
{
	int i;
	for(i=0;i<4;i++)
	{
		//printf("\nRent is %.2f",rent[i]);	// i is the subscript notation,  takes the adrees of the first item in array and i goes to the address from first address
		//printf("\nRent is %.2f",*(rent+i));  //  pointer notation: takes the address for instance C5 which is the address of the first item in array and adds one to the address which makes it go the next
		printf("\nRent is %.2f",*rent++);		// same as the second printf it just adds one to the address.
		//printf("\nRent is %.2f",rent[i]);
	}
		
}
