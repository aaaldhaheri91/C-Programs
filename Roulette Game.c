//Roulette Game program
//Ahmed Aldhaheri

#include<stdio.h>
void showInstructions();
float getBetAmount();
int makeBet(char*,int*);
float figureWinnings(int,int,char,float);
int main()
{
	char answer;
	int number;
	int x;
	float betamount, amountWon;
	char betGame;
	int betNumber;
	showInstructions();
	do {
		
		betamount = getBetAmount();
		makeBet(&betGame, &betNumber);
		x=spinWheel();
		amountWon=figureWinnings(betNumber,x,betGame,betamount);
		
		printf("\nIf you would like to play again please enter Y or y: ");
		scanf("\n%c", &answer);
		
	} while(answer == 'Y' || answer == 'y');
	
    getchar();getchar();
	return 0;
	
}

void showInstructions()
{
	printf("You can place your bet in one of three ways: \n");
	printf("\n1.bet on a number(payout is 36 times the bet amount)");
	printf("\n2.bet on an odd or even(payout is 2 times the bet)");
	printf("\n3.bet on a dozen first 1-12, second 13-24, third 25-36(payout is 3 times the bet)");
	
	
}

float getBetAmount()
{
	float amount;
	do {
			printf("\nPlease enter the amount you would like to bet ");
			scanf("%f",&amount);
			
			if (amount<0)
			{
				printf("Please enter a valid number");
				continue;
			}
		break;
	}
	while(1);
	
	return amount;
}
int makeBet(char *betGameP,int *betNumberP)
{
	char betGame;
	int betNumber;
	do {
        printf("Please choose a bet a type from the following: \n a. press 'a' to bet on a number \n b. press 'b' to bet on odd/even \n c. press 'c' to bet on a dozen\n ");
	    scanf("\n%c",&betGame);
	    switch(betGame)
        {
                       case'a':
                       case'A':
                            break;
                       case'b':
                       case'B':
                               break;
                       case'c':
                       case'C':
                               break;
                       default:
	                    printf("Invalid Choice please enter a valid choice");
                        continue;
        }
        break; 
        } while(1);
       
     
     
     do {
     				printf("Please enter the number you want to bet (only from 0-36): ");
     				scanf("%d",&betNumber);
     				if (betNumber>36 || betNumber<0)
                    printf("Please enter a number from 0 to 36\n");
                    continue;
                    
                    break;
       }while(betNumber>36 || betNumber<0);
	*betGameP=betGame;
	*betNumberP=betNumber;
}
int spinWheel()
{
	int x;
	srand(time(0));
	x = rand() %37;
	printf("Your random number is %d\n", x);
	return x;
}

float figureWinnings(int betNumber, int x, char betGame, float betamount)
{
	float total;
	
   if (betNumber == x)
   {
   	if (betGame=='a' || betGame=='A')
   	{
   		total=betamount*36;
   		printf("You won %.2f",total);
	   }
   }
   else if (betNumber == x)
   {
   	if (betGame=='b' || betGame=='B')
   	{
   		total=betamount*2;
   		printf("You Won %.2f",total);
	   }
   }
	else if (betNumber == x)
   {
   	if (betGame=='c' || betGame=='C')
   	{
   		total=betamount*3;
   		printf("You Won %.2f",total);
	   }
   }
   else 
   {
   	total=betamount;
   	printf("You lost %.2f", total);
   }
   return total;
}
