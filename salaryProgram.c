//Ahmed Aldhaheri
// Salary Program: The user will have to choose one salary plan out of the two thats avaialable.

#include<stdio.h>
float plan1();
float plan2();
int main()
{
    float salary;
    float total;
    int choice;
    printf("Please choose from the following salary plans:\nPlan 1\nPlan 2\n: ");
    scanf("%d",&choice);
   
   
      switch(choice)
      {
      	case 1:
      		total = plan1();
      		break;
      	case 2:
      		total = plan2();
      		break;
      	default:
      		printf("invalid choice");
      		
	  }
       
       
   
   printf("\nYour total salary for 30 days is %.2f ",total);
       
       
       
    
  getchar();getchar();
 return 0;   
}

float plan1()
{
      int x=1;
      float salary=0;
      
      float count=1;
      float total=0;
      while(x<=10)
      {
                  
                  salary=100*count;
                  total=total+salary;
                  count=count+1;
                   x++;
         }
     
      return total;
     
 }

float plan2()
{
      int x = 1;
     
      float total = 0;
      float salary = 1;
   	  float count = 2;
      while(x <= 10)							//pretest loop, bc it checks at the beginnig 
      {
                  salary *= count;		//total for 10 should be 2046 something.
                  total += salary;
                  ++x;
                  
                  
      }
    
      return total;
     
}
