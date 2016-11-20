#include<stdio.h>
int is_prime(int n);
 int main()
  
 {
 int j=1;
 int N;
 int n=3;
   while(j<=100)
 { 
  N=is_prime(n);
  if(N=0)
  { j=j+1;
  if(j>=2&&j<=100)
  {printf("%d ",n);
  }
  n++;
  } 
  else if(N=-1)
  n++;  
}
 return 0; 
}

int is_prime(int n)
{
  int i;
  for(i=2;i<=n-1;i++)
 if (n%i==0) break;

  if(i<n)
  return -1;
  else
  return 0;
}
