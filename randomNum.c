// pointers

#include<stdio.h>
#include<stdLib.h>
#include<time.h>
int main()
{
	int i, num;
	srand(time(0));
	for (i=1;i<=10;i++)
	{
	num=rand() %10+0;
	printf("\n%d",num);
	}
	getchar();getchar();
	return 0;
}
