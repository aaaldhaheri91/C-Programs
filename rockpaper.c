// converting python code to c

#include<stdio.h>
//int name_to_number(char);
int main()
{
    char player_choice;
    int x;
    printf("Please choose one of the following:\n rock \n spock \n paper \n lizard \n scissors: ");
    scanf("\n%c ", &player_choice);
    printf("%c ", player_choice);
    
    //x = name_to_number(player_choice);
    //printf("%d ", x);
    
    
    
    
    getchar();getchar();
    return 0;
    
}

/*int name_to_number(char name)
{
    if (name == 'rock')
    {  
             int x = 0;
             return x;
    }
    
    else if (name == 'spock'){
         int x = 1;
         return x;
         }
    else if (name == 'paper'){
         int x = 2;
         return x;
         }
    else if (name == 'lizard'){
         int x = 3;
         return x;
         }       
    else if (name == 'scissors'){
         int x = 4;
         return x;
         }       
    else{
        printf("Invalid choice please try again");
        }
   
     
}    */
         
