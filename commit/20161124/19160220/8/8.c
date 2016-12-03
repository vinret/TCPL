#include <stdio.h>
int is_prime(int n)
{
if(n==1) return -1;
if(n==2) return 0;
int i;
for(i=2;i<=n-1;i++)
  if(n%i==0) break;
if(i<n) 
  return -1;
else 
  return 0;
}
void count_prime(int M,int N)
{int count=0,count1=0,j,x;
 for (j=1;;j++)
 {
  x=(is_prime(j));
  if(!x)
  {  
   count++;
   if(count>=M&&count<N) 
     {printf("%d",j);count1++;
      if(count1%10==0) printf("\n");
      else printf(" ");}
  }
  if(count==N) 
     {printf("%d",j);count1++;
      if(count1%10==0) printf("\n");
      break;}
 }
}
int main()
{int M,N;
 printf("Please input M and N:");
 scanf("%d %d",&M,&N);
 count_prime(M,N);
 return 0;}
