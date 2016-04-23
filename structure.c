// structures: single record
													//fields>record>file>database
#include<stdio.h>
float calculateCost(int, float);


struct Inventory
{
	int number;
	int qty;										//structure defintion
	float price;
	
};
			
float calculateCost2(struct Inventory);
int main()
{
	float cost;
	struct Inventory part;
	printf("Enter a part number ");
	scanf("%d",&part.number);
	printf("Enter a quantity ");
	scanf("%d",&part.qty);
	printf("Enter a price ");
	scanf("%f",&part.price);
	printf("\n %d \t %d \t %.2f ",part.number,part.qty,part.price);
	
	//cost=calculateCost(part.qty,part.price);
	cost=calculateCost2(part);
	printf("\n the cost is %.2f",cost);
	
	
	getchar();getchar();
	return 0;
	
	
}

/*float calculateCost(int qty, float price)
{
	float cost;
	cost=qty*price;
	return cost;
} */

float calculateCost2(struct Inventory p)
{
	float cost;
	cost=p.qty*p.price;
	return cost;
}
							
