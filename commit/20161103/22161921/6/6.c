#include <stdio.h> 
int Factorial( const int N ); 
int main() 
 { 
  int N,NF; 
  scanf("%d",&N); 
  NF=Factorial(N); 
  if (NF)  
  printf("%d!=%d\n",N,NF); 
  else 
  printf("Invalid input\n"); 
  return 0; 
 } 
 int Factorial( const int N ) 
 { 
 		if(N==1) 
 				return 1; 
 		else 
 				return N*Factorial(N-1); 
 } 




