//Exam#1
//Ahmed Aldhaheri
#include<stdio.h>
int calcYears(int,int);
int main()
{
	int month, day, year;
	int month2,day2,year2,total;
	char answer;
	

		
	do {
	printf("Please enter your month of birth ");
	scanf("%d",&month);
	printf("Please enter your day of birth ");
	scanf("\n%d",&day);
	printf("Please enter your year of birth ");
	scanf("%d",&year);
	printf("Please enter the current month  ");
	scanf("\n%d",&month2);
	printf("Please enter the current day ");
	scanf("%d",&day2);
	printf("Please enter the current year ");
	scanf("\n%d",&year2);
	
	

	if (month >= month2)
		 {
		 	if (day<=day2)
		 	{
                          total=calcYears(year,year2)-1;
                          printf("You are %d years old",total);
		 	}
		 
		 }
	else {
                          total=calcYears(year,year2);
                          printf("You are %d years old",total);

		}
			

		
	
	 
	
	
	switch(month)
	{
		case 1:
			printf("You were born in January ");
			break;
		case 2:
			printf("You were born in Feburary ");
			break;
		case 3:
			printf("You were born in March ");
			break;
		case 4:
			printf("You were born in April ");
			break;
		case 5:
			printf("You were born in May ");
			break;
		case 6:
			printf("You were born in June ");
			break;
		case 7:
			printf("You were born in July ");
			break;
		case 8:
			printf("You were born in August ");
			break;
		case 9:
			printf("You were born in September ");
			break;
		case 10:
			printf("You were born in October ");
			break;
		case 11:
			printf("You were born in November ");
			break;
		case 12:
			printf("You were born in December ");
			break;
		default:
			("Invalid Choice");
	}
	
	printf("\nWould you like to calculate another age enter lower case y or uppercase Y if yes ");
	scanf("\n%c",&answer);
	
} while (answer == 'Y' || answer == 'y');
	
	
	getchar();getchar();
	return 0;
	
}

int calcYears(int year, int year2)
{
	int sum;
	sum=year2-year;
	return sum;
}
