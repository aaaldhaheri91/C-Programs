#include<stdio.h>
#include<stdlib.h>


struct Bank
{
	int id;
	float checkingBalance;
	float savingsBalance;
	
};
void getTransactionsInfo(int *, char *, char *, float *);
void displayData(int, struct Bank[]);

int main()
{
    struct Bank accounts[10];
    int i, accountNumb;
    FILE *fp;
    char choice, accountType, answer;
    float amountTransaction;
    
    do{
          
    getTransactionsInfo(&accountNumb,&choice,&accountType,&amountTransaction);
    
    fp = fopen("accounts.csv", "r"); 
    
    for(i = 0; i < 10; i++)
    {
                     if (fp== NULL)
                     {
                                 printf("Error-Could not read file");
                                 exit(0);
                     }
                     fscanf(fp,"%d,%f,%f", &accounts[i].id, &accounts[i].checkingBalance,&accounts[i].savingsBalance);
                     
                     
    }               
    
    for(i=0;i<10;i++)
    {
    
                     if (accountNumb==accounts[i].id)
                     {
                                                     printf("account number exist");
                                                     
                                                     if (choice=='w' || choice=='W')
                                                     {
                                                                     if(accountType=='c' || accountType=='C')
                                                                     {
                                                                                         if(amountTransaction<accounts[i].checkingBalance)
                                                                                         { 
                                                                                                                                          printf("\ninsufccient funds");
                                                                                                                                          getTransactionsInfo(&accountNumb,&choice,&accountType,&amountTransaction);
                                                                                                                                                         continue;
                                                                                           }
                                                                     }                    
                           
                                                      }
                                                      
                                                       if (choice=='w' || choice=='W')
                                                     {
                                                                     if(accountType=='s' || accountType=='s')
                                                                     {
                                                                                         if(amountTransaction<accounts[i].savingsBalance)
                                                                                         { 
                                                                                                                                          printf("\ninsufccient funds");
                                                                                                                                          getTransactionsInfo(&accountNumb,&choice,&accountType,&amountTransaction);
                                                                                                                                          continue;
                                                                                           }
                                                                     }                    
                           
                                                      }
                                                      
                                                      if (choice=='d' || choice=='D')
                                                      {
                                                                     if(amountTransaction<=0)
                                                                     {
                                                                                             printf("Invalid amount of deposit");
                                                                                             getTransactionsInfo(&accountNumb,&choice,&accountType,&amountTransaction);
                                                                                             continue;
                                                                     }
                                                                     
                                                      }           
                                                                          
                     }     
                     
                                                                                    
          
          }               
          
          
              printf("\nWould you like another transaction(y-yes or n-no:)");
              scanf("\n%c",&answer);
              displayData(accountNumb,accounts);
    }while(answer!='N' && answer !='n');
               
    fclose(fp);
    
 getchar();getchar();
 return 0;                    
}

void getTransactionsInfo(int *idP, char *choiceP, char *accountTypeP, float *amountTransactionP)
{
     int accountNumb;
     char choice, accountType;
     float amountTransaction;
     
     printf("Please eneter your account number: ");
     scanf("%d",&accountNumb);
     printf("Would you like to withdraw or or Deposit(w-d):");
     scanf("\n%c",&choice);
     printf("which account type would you like (c-checking or s-saving):");
     scanf("\n%c",&accountType);
     printf("Please enter the amount of transaction");
     scanf("%f",&amountTransaction);
     *idP=accountNumb;
     *choiceP=choice;
     *accountTypeP=accountType;
     *amountTransactionP=amountTransaction;

}
void displayData(int accountNumb, struct Bank accounts[])
{
     int i;
     for(i=0;i<10;i++)
     {
     if (accountNumb==accounts[i].id)
                      {
                         printf("your account is: %d\n",accounts[i].id);
                         printf("your checking balance is: %.2f \n",accounts[i].checkingBalance);
                         printf("your saving balance is: %.2f \n",accounts[i].savingsBalance);
                         break;
                      }
     }
                                                      
                      
         
     
     
}
