
#include<stdio.h>

int fib(int);
void testFib(int);
int _main()
{
	int number;
	printf("Please enter e number: ");
	scanf("%d", &number);
	testFib(number);
	

	getchar(); getchar();
	return 0;
}

int fib(int x){
	if (x >= 0) {
		if (x == 0 || x == 1){
			return x = 1;
		}
		else {
			return x = fib(x - 1) + fib(x - 2);
		}
	}

}

void testFib(int n){
	int i;
	for (i = 0; i < n + 1; i++){
		printf("fib of %d ", i, " = ", fib(i));
	}

}
