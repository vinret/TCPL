#include<stdio.h>
int main()
{
  int f,c;
  int Celsius;
  printf("please write a fahrenheit temperature");
  scanf("%d",&f);
  c=5*(f-32)/9;
  Celsius = c;
  printf("%d\n",Celsius); 
  return 0;
}
