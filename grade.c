// calculate OB studetn grade

#include<stdio.h>

int main()
{
    char choice;
    
    
    printf("Would you like to calculate your class grade? if no press 'q' or 'Q', \n and if yes press any other key ");
    scanf("%c",&choice);
    
    while(choice != 'q' && choice != 'Q')
    {
                    int size = 0, count = 0, i;
                    float average = 0, total = 0;
                    float test[size];
                
                printf("How many exams do you have in the class");
                scanf("%d",&size);
                
                
                 for(i = 0; i < size; i++)
                 {
                       printf("What is your grade for test %d ", i+1);
                       scanf("%f",&test[i]);
                       total+= test[i];
                       count++;
                 }
                 average = total/count;
                 printf("Your total grade is %.2f",average);
                 
                  printf("\nWould you like to calculate your class grade? if no press 'q' or 'Q', \n and if yes press any other key ");
                  scanf("\n%c",&choice);
    }
                       
    
    
    getchar();getchar();
    return 0;
}
    
    
