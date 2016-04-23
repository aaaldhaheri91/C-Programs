// While loop

#include<stdio.h>
int main()
{

	int x=1;
	do 
	{
		printf("%d",x);
		
		x++;
	} while(x<=5);					//post-test loop, checks at the end: always print its content at least once.
									// pre-test loop: if not true it will never do anything.
}
