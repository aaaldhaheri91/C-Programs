
#include<stdio.h>
void copyMessage(char[], char[]);

int main()
{
    char message1[30];
    char message2[30];
    
    printf("Enter a message");
    gets(message1);
   puts(message1); /// to print the message
   
  // message2=message1; pointer constant
  
  copyMessage(message2, message1);
  puts(message2); // same as printf message 2
    
getchar();getchar();
return 0;
}
void copyMessage(char message2[], char message1[])
{
     int i;
     i=0;
     while(message1[i] != '\0')						//(messs2[i++]=mess1[i]) and semicolon goes under in the body space, this code is sufficient, you dont need a body.
	{
            {
                    message2[i]=message1[i];
                    i++;
            }
     mess2[i]='\0';
	}
}

