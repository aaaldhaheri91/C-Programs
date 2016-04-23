// comparing temperatures 

#include<stdio.h>
float triangle_area(int, int);
float fahrenheit2celsius(int);
float fahrenheit2kelvin(int);
void displayHello();

int main()
{
    float a1, a2, c1, c2, k1, k2;
    char h;
    
    a1 = triangle_area(3, 8);
    a2 = triangle_area(14, 2);
    printf("%.2f, %.2f",a1, a2);
    
    c1 = fahrenheit2celsius(32);
    c2 = fahrenheit2celsius(212);
    printf("\n%.2f, %.2f",c1, c2);
    
    k1 = fahrenheit2kelvin(32);
    k2 = fahrenheit2kelvin(212);
    printf("\n%.2f, %.2f", k1, k2);
    
    displayHello();
    
    
    
    getchar();getchar();
    return 0;
}

float triangle_area(int base, int height)
{
      float area;
      area = (1.0 / 2) * base * height;
      return area;
      
}

float fahrenheit2celsius(int fahrenheit)
{
      float celsius;
      
      celsius = (5.0 / 9) * (fahrenheit - 32);
      return celsius;
      
}
float fahrenheit2kelvin(int fahrenheit)
{
      float celsius, kelvin;
      
      celsius = fahrenheit2celsius(fahrenheit);
      kelvin = celsius + 273.15;
      return kelvin;
}
void displayHello()
{
  
     printf("\nHello, world");
 
}
