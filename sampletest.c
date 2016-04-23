// sample test
#include<stdio.h>
void calculate(int, int*, int*);
int main()
{
	
	char answers[15]={'b','d','a','a','c','a','b','a','c','c','a','b','c','d','a'};
	char student[15];
	char name[20];
	char state[20];
	int i;
	int total;
	int difference;
	int count=0;
	printf("\nProgrammer: Ahmed Aldhaheri");
	printf("\n what is your name: ");
	gets(name);
	printf("\nwhat is your state of residence: ");
	gets(state);
	printf("Your name is %s ",name);
	printf("\nyour state is %s ",state);
	
	for (i=0;i<15;i++)
	{
		printf("Please enter the answer for question #%d ",i+1);
		scanf("\n%c",&student[i]);
		
	}
	for (i=0;i<15;i++)
	{
		if (student[i]==answers[i])
			count++;
		
		
	}
	calculate(count,&total,&difference);

	
	if (total>=70)
		printf("%s you passed the Michigan test",name);
		
	else 
		printf("%s You failed the test",name);
		
	
	printf("\nyour scroe was %d ou of 15 for a grade of %d%%",count,total);
	
	if (difference>0)
		printf("\nYour score is %d percentage points above the national average ",difference);
		
	else 
		printf("\nYour score is %d percentage points below the national average ",difference);
	
	getchar();getchar();
	return 0;
}
void calculate(int count, int *totalP, int *differenceP)
{
	
	*totalP=count/15.0*100;
	*differenceP=*totalP-82;

	
}
