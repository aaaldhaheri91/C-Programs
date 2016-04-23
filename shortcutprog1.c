#include<stdio.h>
int main()
{
	int x=5, total=0, y=4;
	x+=2;
	y+=8;
	x*=++y;
	x%=5;
	total+=(x++)+(y++);
	printf("%d %d %d", x,y,total);
}
