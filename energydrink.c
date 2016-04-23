// Ahmed Aldhaheri
// Survey selecting favorite energy drinks
#include<stdio.h>
int main()
{
    int iCount=0;                         // to get the number of students that got surveyed
    int iCount_1=0;                       // realized didn't need all these counters in the middle of the program, but I left them because I used them anyways                       
    int iCount_2=0;                       
    int iCount_3=0;
    int iCount_4=0;
    int iCount_5=0;
    int iCount_6=0;
    int iCount_7=0;
    int energyDrink_1;                    // to get total number of red bull fans
    int energyDrink_2;                    // to get total number of monster fans
    int energyDrink_3;                    // to get total number of rock star fans
    int energyDrink_4;                    // to get total number of NOS fans
    int energyDrink_5;                    // to get total number of kick start fans
    int energyDrink_6;                    // to get total number of 5 hour energy fans
    int energyDrink_7;                    // to get total number of who dont drink energy drinks
    
    
    
    printf("How many students like Red Bull ");
    scanf("%d",&energyDrink_1);
    iCount_1=iCount_1+energyDrink_1;   
    iCount=iCount+iCount_1;
    
    printf("How many students like Monster ");
    scanf("%d",&energyDrink_2);
    iCount_2=iCount_2+energyDrink_2;
    iCount=iCount+iCount_2;
   
    printf("How many students like Rock Star ");
    scanf("%d",&energyDrink_3);
    iCount_3=iCount_3+energyDrink_3;
    iCount=iCount+iCount_3;
    
    printf("How many students like NOS ");
    scanf("%d",&energyDrink_4);
    iCount_4=iCount_4+energyDrink_4;
    iCount=iCount+iCount_4;
    
    printf("How many students like Kick Start ");
    scanf("%d",&energyDrink_5);
    iCount_5=iCount_5+energyDrink_5;
    iCount=iCount+iCount_5;
    
    printf("How many students like 5 Hour Energy ");
    scanf("%d",&energyDrink_6);
    iCount_6=iCount_6+energyDrink_6;
    iCount=iCount+iCount_6;
    
    printf("How many students Do not drink energy drinks ");
    scanf("%d",&energyDrink_7);
    iCount_7=iCount_7+energyDrink_7;
    iCount=iCount+iCount_7;
    
    printf("\n");
    printf("Total number of students surveyed %d ", iCount);
    printf("\n");
    printf("\nTotal number of students who perferred Red Bull %d ", iCount_1);
    printf("\nTotal number of students who perferred Monster %d ", iCount_2);
    printf("\nTotal number of students who perferred Rock Star %d ", iCount_3);
    printf("\nTotal number of students who perferred NOS %d ", iCount_4);
    printf("\nTotal number of students who perferred Kick Start %d ", iCount_5);
    printf("\nTotal number of students who perferred 5 Hour Energy %d ", iCount_6);
    printf("\nTotal number of students who do not drink energy drinks %d ", iCount_7);
    
    getchar(); getchar();
    return 0;
    
}
    
    
    
    
    
    
    
    
    
    
    
    
