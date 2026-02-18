#include<stdio.h>
int main()
{
  float celcius,fahrenheit;
  printf("Enter temperature in centigrade:");
  scanf("%f",&celcius);
  fahrenheit=(celcius*9/5)+32;
  printf("temperauture in fahrenheit is=%f",fahrenheit);
  return 0;
}