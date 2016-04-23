//strings
#include<stdio.h>
int main()
{											// intialize a variable means to set a value at the time of declaration
	char message[81]="This is Fun";  		//string, an array of characters ends and terminated by a null. 
											// single qoutes-single character. double qoutes is a string
											//reccomendation for strings is use gets() and printf().
	puts(message);
	printf("Please enter your name ");
	//scanf(" %s",message);
	gets(message);							
	printf("Hello %s ",message);
	puts(message);
	
	
	getchar();getchar();
	return 0;
}
