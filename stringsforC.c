// extra notes for strings

#include<stdio.h>
void display(char*);
int main()
{
	char message[81];
	
	printf("Enter your name ");
	//scanf("%s",message);
	gets(message);							
	printf("Hello %s ",message);
	display(message);
	
	
	
	getchar();getchar();
	return 0;
}
void display(char *myMessage)
{	
	*myMessage='k';
	printf("\nGoodbye %s ", myMessage);
	
	
}
