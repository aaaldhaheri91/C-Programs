// Strings Vowel Count
#include<stdio.h>
int countTotalVowel(char[],int[]);
int main()
{
	char vowelCount[5]={'A','E','I','O','U'};
	char message[100];
	int total[5]={0,0,0,0,0};
	int i,totalAll=0;
	printf("Please enter the message: ");
	gets(message);
	
	countTotalVowel(message,total);
	printf("Total:");
	for (i=0;i<5;i++)
	{
		printf("%c's is: %d \n",vowelCount[i],total[i]);
		totalAll+=total[i];
	}
	printf("Total vowels: %d",totalAll);
	
	getchar();getchar();
	return 0;

}

int countTotalVowel(char message[], int total[])
{
	int i;
	i=0;
	
	while(message[i]!= '\0')
	{
		switch (message[i])
		{
			case'A':
			case'a':
				total[0]++;
				break;
			case'E':
			case'e':
				total[1]++;
				break;
			case'I':
			case'i':
				total[2]++;
				break;
			case'O':
			case'o':
				total[3]++;
				break;
			case'U':
			case'u':
				total[4]++;
				break;
			default:
				break;
		}
		i++;
	}

}
