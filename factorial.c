//practicing in C

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int factResult = factorial(10);
    printf("Factorial 10 is %d ",factResult);
    
    getchar();getchar();
    return 0;
       
}

int factorial(int n){
    
    if(n <= 1){
         return n;     
    }
    else{
         return n * factorial(n - 1);     
    }
}
