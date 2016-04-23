//read bank file program]

#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>


struct Bank{
	int id;
	float checkingBalance;
	float savingsBalance;
	
};//end struct
//protoypes
void getTransactionsInfo(int *, char *, char *, float *);
void displayData(int, struct Bank[]);

int main(){
    
    //declare variables
    struct Bank accounts[10];
    int i, accountNumb;
    FILE *fp;
    char choice, accountType, answer;
    float amountTransaction;
    
    //assigning to read file
    fp = fopen("accounts.csv", "r"); 
            
    //searching through file and assigning file info to struct
    for(i = 0; i < 10; ++i){
                  
            if(fp == NULL){
                  printf("Error-Could not read file");
                  exit(0);
            }
            fscanf(fp,"%d,%f,%f", &accounts[i].id, &accounts[i].checkingBalance, &accounts[i].savingsBalance);
                             
    }//end for loop
    
    //start do while to ask user through info function 
    do{
          
            getTransactionsInfo(&accountNumb,&choice,&accountType,&amountTransaction);
            choice = toupper(choice);
            accountType = toupper(accountType);
            
            //Match user entry with file using a for loop
            for(i = 0; i < 10 ; i++){
                   //start 1st if statement
                   if(accountNumb == accounts[i].id){
                        printf("account number exist\n");
                        
                        //start 1st main nested if statement
                        if(choice == 'W' && accountType == 'C'){
                            
                            if(amountTransaction > accounts[i].checkingBalance){
                                printf("insufccient funds\n");
                                getTransactionsInfo(&accountNumb,&choice,&accountType,&amountTransaction);
                                continue;  
                            }
                            
                            else{
                                 accounts[i].checkingBalance -= amountTransaction;
                            }//end else sub-nested statement 
                            
                         }//end 1st main nested if statement  
                         
                         //start 2nd main if statement
                         else if(choice == 'W' && accountType == 'S'){
                              
                              if(amountTransaction > accounts[i].savingsBalance){
                                  printf("insufccient funds\n");
                                  getTransactionsInfo(&accountNumb,&choice,&accountType,&amountTransaction);
                                  continue;
                              }   
                              
                              else{
                                   accounts[i].savingsBalance -= amountTransaction;
                              }
                         
                         }//end 2nd main if statement
                         
                         //start 3rd main if statement
                         //else if(choice == 'D'){   
                         else{
                             if(amountTransaction <= 0){
                                 printf("Invalid amount of deposit\n");
                                 getTransactionsInfo(&accountNumb, &choice, &accountType, &amountTransaction);
                                 continue;
                             }
                             
                             else if(accountType == 'C'){
                                  accounts[i].checkingBalance += amountTransaction;
                             }
                             else{
                                  accounts[i].savingsBalance += amountTransaction;
                             }
                         
                         }//end 3rd main if statement
                         
                   }//end 1st if statement
            }//end for loop   
            
            printf("\nWould you like another transaction(y-yes or n-no:)");
            scanf("\n%c",&answer);
            displayData(accountNumb,accounts); 
      }while(answer != 'N' && answer != 'n'); // end do while loop
      
      //close file
      fclose(fp);
      
      getchar();getchar();
      return 0;
    
}//end main

//start getTransactionsInfo function
void getTransactionsInfo(int *idP, char *choiceP, char *accountTypeP, float *amountTransactionP){
     /*this method take pointers and assigns them to user entry for user bank information */
     
     //declare local variables
     int accountNumb;
     char choice, accountType;
     float amountTransaction;
     
     //ask user bank information
     printf("Please eneter your account number: ");
     scanf("%d",&accountNumb);
     
     printf("Would you like to withdraw or or Deposit(w-d):");
     scanf("\n%c",&choice);
     
     printf("which account type would you like (c-checking or s-saving):");
     scanf("\n%c",&accountType);
     
     printf("Please enter the amount of transaction: ");
     scanf("%f",&amountTransaction);
     //end asking user for bank info
     
     //assign local variables to pointer refrences
     *idP = accountNumb;
     *choiceP = choice;
     *accountTypeP = accountType;
     *amountTransactionP = amountTransaction;
     //end assigning local variables to local varibles
}//end getTransactionsInfo function

void displayData(int accountNumb, struct Bank accounts[])
{
     /*this function takes data and displays it*/
     int i;
     
     for(i = 0; i < 10; ++i)
     {
         if(accountNumb == accounts[i].id){
             printf("\nyour account is: %d\n",accounts[i].id);
             printf("your checking balance is: %.2f \n",accounts[i].checkingBalance);
             printf("your saving balance is: %.2f \n\n",accounts[i].savingsBalance);
             break;
         }//end if statement
     }//end for loop
                                                      
}//end function
