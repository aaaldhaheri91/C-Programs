

#include<stdio.h>
int main()
{
  char text[100] = {"my name is Ahmed and i like to play with Ahmed"};
  char myName[5] = {"Ahmed"};
  char hits[100] = {0};
  int i, j;
  
  for(i = 0; i < text[100]; i++)
  {
        if (text[i] == 'A')
        {
                    for( j = i; j < myName[5] + i; j++)
                    {
                       text[j] = hits[j];
                    }
        }
        
  }
       puts(hits);
        
  
  
  getchar();getchar();
  return 0;
}
