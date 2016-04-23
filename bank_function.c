// Ahmed Aldhaheri
// Bank function asssignment, ask the user to choose from four choices.

#include<stdio.h>
char menu();
float getDeposit(float);
float getWithdraw(float);
void displaybalance(float);

int main()
{
    char choice;
    char selection;
    float withdraw, deposit, balance;
    
  
    
    do {
      
        selection=menu();
         
        
  
        switch(selection)
        {
                                         
                  case'D':
                  case'd':
          
                             balance=getDeposit(balance);
                             break;
                  case'W':
                  case'w':
                             balance=getWithdraw(balance);
                             break;
                  case'B':
                  case'b':   
				  			displaybalance(balance);
                             break;
                  case'Q':
                  case'q':           
				  			 printf("Thank You");
                             break;
                  default: 
                             printf("Invalid Choice please enter a valid choice\n");
                             continue;
                  
                          
    
                  
        }             
        
     } while(selection != 'Q' && selection != 'q');
    
    getchar();getchar();
    return 0;
}

char menu()
{
     char choice;
    printf("Welcome to HFC Federal Credit Union ! \n");
    printf("\n Please select from the following menu: "); 
    printf("\n D:\t Make a deposit \n W:\t Make a withdrawl \n B:\t Check your account balance \n Q:\t To quit \n");
    scanf("\n%c",&choice);
    
    return choice;
}
float getDeposit(float balance)
{
      
    float deposit;
    int x=0;
  
    
     while (x < 1)
     {
      printf("Enter amount you would like to deposit: ");
      scanf("%f",&deposit);
         if (deposit <= 0)
         {  
            printf("Try Again----------> Please enter a valid amount\n");
            continue;
         }
         x++;
     }
    balance=balance+deposit;
    return balance;
    
    
}
float getWithdraw(float balance)
{
    float withdraw;
    int x=0;
    while (x < 1)
    {
     printf("Enter the amount you would like to withdraw: ");
     scanf("%f",&withdraw);
       if (withdraw > balance)
       {
                  printf("Insuficcient funds please try again\n");
                  continue;
       }
        x++;   
    }
    
    balance=balance-withdraw;
    return balance;
    
}
void displaybalance(float balance)
{
    
    printf("Please Enter your current balance: ");
    scanf("%f", &balance);
    printf("Your current balance is %.2f ",balance);
  
    return balance;
}
