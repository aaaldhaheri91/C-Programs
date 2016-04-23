//Pointer 1. variable 2. can only contain an address(an adress location)
#include<stdio.h>
int main()
{

int num;
int *numPtr;							//declaring a pointer.  data types have to be the same to what your pointing to.(int num) 
num=10;									// pointer def: a varaiable that holds an address.
numPtr=&num;
printf("%d\n",num);
printf("%d\n",&num);						// we know its gonna print a 10
printf("%d\n",numPtr);
printf("%d\n",&numPtr);					// we know its gone print the address of num which is AF01
printf("%d",*numPtr);					// * asterisk has two jobs. 1. when declaring its telling that its a pointer. 2.anywhere other from declaration then it means Go To
										// astersik mean indirectly assining values.
getchar();getchar();
return 0;										
}
