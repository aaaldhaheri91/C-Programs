/* GameBox BETA v0.2 */

    #include <stdio.h>
    #include <conio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <string.h>

    void ERPS();
    void Menu();
    void BJack();
    void Log();
    int ERPSGame();
    void ERPSInstruct();


    int main() {
    char Choice;
    system("cls");

printf("\t\t Welcome to Mark and Leroy's GameBox BETA v0.2 \n\n\n");
printf("--------------------------------------------------------------------------------\n");
printf("\t _________________________________________________________\n");
printf("\t ||_____________________________________________________|| \n");
printf("\t ||                                       \t\t|| \n");
printf("\t ||                                       \t\t|| \n");
printf("\t ||                                       \t\t|| \n");
printf("\t ||\t Please press 'A' to continue to the menu\t||\n");
printf("\t ||\t                                         \t||\n");
printf("\t ||\t Otherwise, press 'F' to exit the program\t||\n");
printf("\t ||_____________________________________________________|| \n");
printf("\t ||_____________________________________________________||\n");
printf("--------------------------------------------------------------------------------\n\n");
/* Drawing Starts Here */

printf("\t\t ========================================\n");
printf("\t\t ||                                    || \n");
printf("\t\t ||          ||===============         || \n");
printf("\t\t ||          ||                        || \n");
printf("\t\t ||          ||         =======        || \n");
printf("\t\t ||          ||     Gamebox  ||        || \n");
printf("\t\t ||          ||   BETA v0.2  ||        || \n");
printf("\t\t ||          ||==============||        || \n");
printf("\t\t ||                                    || \n");
printf("\t\t ||      ||====  ||====||  ==    ==    || \n");
printf("\t\t ||      ||   || ||    ||   ==  ==     || \n");
printf("\t\t ||      ||===|| ||    ||     ==       || \n");
printf("\t\t ||      ||___|| ||====||   ==  ==     || \n");
printf("\t\t ||                        ==    ==    || \n");
printf("\t\t ||   Artwork by: Mark Sanchez         || \n");
printf("\t\t ========================================\n");

/* Drawing Ends Here */
    scanf("%c", &Choice);

        switch (Choice) {

            case'A':case'a':{

                Menu();
                break;

            }

            case'F':case'f':{
                exit(0);
            }

            default: {
                main();
            }

        }

        return 0;
   }

    void Menu() {
char Choice1;
system("cls");
printf("\t\t Welcome to Mark and Leroy's GameBox BETA v0.2 \n\n\n");
printf("--------------------------------------------------------------------------------\n\n");
printf("\t\t Press 'R' to play the Enhanced Rock-Paper-Scissors game\n\n\n");
printf("\t\t Press 'B'to play Blackjack\n\n\n");
printf("\t\t Press 'C' to view the changelog\n\n\n");   
printf("--------------------------------------------------------------------------------\n\n");
    scanf("%c", &Choice1);

switch(Choice1) {
    case'R':case'r': {
        ERPS();
        break;
    }
    case'B':case'b': {
        BJack();
        break;
    }
    case'C':case'c': {
        Log();
        break;
    }
    default: {
        Menu();
    }
}

    }



    void ERPS() {
system("cls");

    char Instruct1;
    char Instruct2;
    /* Menu of ERPS */
    printf("\t\t\t Welcome to ENHANCED Rock Paper Scissors\n\n\n");
    printf("\t\t\t Press A to start the game\n\n");
    printf("\t\t\t Press S to view the instructions\n\n");
    printf("\t\t\t Press 'P' to return to the main menu\n");
   
    scanf("%c", &Instruct2);

    switch(Instruct2) {
        case'A':case'a': {
            ERPSGame();
            break;
        }
        case'S':case's': {
            ERPSInstruct();
            break;

        }
        case'P':case'p': {
            Menu();
            break;

        }
        default:{
            ERPS();
        }
    }

   }


int rand_i(int n)
    {
int rand_max = RAND_MAX - (RAND_MAX % n);
int ret;
while ((ret = rand()) >= rand_max);
return ret/(rand_max / n);
    }

int weighed_rand(int *tbl, int len)
    {
int i, sum, r;
for (i = 0, sum = 0; i < len; sum += tbl[i++]);
if (!sum) return rand_i(len);

r = rand_i(sum) + 1;
for (i = 0; i < len && (r -= tbl[i]) > 0; i++);
return i;
   }



int ERPSGame(int argc, const char *argv[]) /* THIS IS THE ERPSGame */
     {
char umove[10], cmove[10], line[255];
int user, comp;
int tbl[]={0,0,0};
int tbllen=3;
printf("Hello, Welcome to rock-paper-scissors\nBy The Elite Noob\n");
      mainloop:
while(1)
{ // infinite loop :)
    printf("\n\nPlease type in 1 for Rock, 2 For Paper, 3 for Scissors, 4 to quit\n");
    srand(time(NULL));
    comp = (weighed_rand(tbl, tbllen) + 1) % 3;
    fgets(line, sizeof(line), stdin);   
    while(sscanf(line, "%d", &user) != 1) //1 match of defined specifier on input line
    { 
        printf("You have not entered an integer.\n");
        fgets(line, sizeof(line), stdin);
    }               
    if( (user > 4) || (user < 1) )
    {
        printf("Please enter a valid number!\n");
        continue;
    }
    switch (comp)
    {
        case 1 :
            strcpy(cmove, "Rock");
            break;
        case 2 :
            strcpy(cmove, "Paper");
            break;
        case 3 :
            strcpy(cmove, "Scissors");
            break;
        default :
            printf("Computer Error, set comp=1\n");
            comp=1;
            strcpy(cmove, "Rock");
            break;
    }
    switch (user)
    {
        case 1 :
            strcpy(umove, "Rock");
            break;
        case 2 :
            strcpy(umove, "Paper");
            break;
        case 3 :
            strcpy(umove, "Scissors");
            break;
        case 4 :
            printf("Goodbye! Thanks for playing!\n");
            return 0;
        default :
            printf("Error, user number not between 1-4 exiting...");
            goto mainloop;
    }
    if( (user+1)%3 == comp )
    {
        printf("Comp Played: %s\nYou Played: %s\nSorry, You Lost!\n", cmove, umove);
    }   
    else if(comp == user)
    {
        printf("Comp Played: %s\nYou Played: %s\nYou Tied :p\n", cmove, umove);
    }
    else
    {
        printf("Comp Played: %s\nYou Played: %s\nYay, You Won!\n", cmove, umove);
    }
    tbl[user-1]++;
}
    }




void ERPSInstruct() {
system("cls");
char Instruct3;

printf("\t\t\t Instructions of the Game \n\n");
printf("\t\t\t There will be 5 choices to choose from\n");
printf("\t\t\t 1. Rock\n");
printf("\t\t\t 2. Paper\n");
printf("\t\t\t 3. Scissors\n");
printf("\t\t\t 4. Lizard\n");
printf("\t\t\t 5. Spock\n\n\n\n");

printf("\t\t This is the mechanism of the choices: \n\n");
printf("\t\t Scissor cuts paper. \n\n");    
printf("\t\t Paper covers rock. \n\n");
printf("\t\t Rock crushes lizard. \n\n");
printf("\t\t Lizard poisons spock. \n\n");
printf("\t\t Spock smashes scissors. \n\n");
printf("\t\t Scissors decapitate lizard. \n\n");
printf("\t\t Lizard eats paper. \n\n");
printf("\t\t Paper disproves spock. \n\n");
printf("\t\t Spock vaporizes rock. \n\n");
printf("\t\t Rock crushes scissors. \n\n");

printf("\t\t\t Press 'P' to return to the menu\n");
    scanf("%c", &Instruct3);

    switch(Instruct3) {
        case'P':case'p': {
            Menu();
            break;
        }
        default: {
            ERPSInstruct();
        }
    }

 }















void BJack() {
system("cls");

char Instruct2;


printf("BLACKJack \n\n\n");

printf("\t\t\t Press 'P' to return to the menu\n");
    scanf("%c", &Instruct2);
    switch(Instruct2) {
        case'P':case'p': {
            Menu();
            break;

        }
        default: {
            BJack();
            break;
        }
    }
getch();
}
void Log() {

system("cls");

char Instruct3;
printf("CHANGELOG: \n\n\n");
printf(" 0.1 -- Fixed a bug wherein the program forces\n to do 'default' upon choosing a game\n\n\n");
printf("-----------------------------------------------\n\n");
printf(" 0.2 -- Fixed display in CMD: Added a few dividers \nas well as correcting a few grammatical mistakes\n");
printf(" Added awesome graphics \n\n\n");
printf("-----------------------------------------------\n\n");
    printf("\t\t\t Press 'P' to return to the menu\n");
    scanf("%c", &Instruct3);
    switch(Instruct3) {
        case'P':case'p': {
            Menu();
            break;

        }
        default: {
            Log();
            break;

        }
    }
}
