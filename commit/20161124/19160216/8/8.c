#include<stdio.h>
int prime_number(int n)
{int i;
for(i=2;i<n/2+1;i++)
  if(n%i==0)
    break;
if(i<n/2+1)
    return 0;
   else
return 1;}
int main()
{int n;
int j=0,a,b,z=0;
scanf("%d%d",&a,&b);
 for(n=2;;n++)
{if(prime_number(n))
  { j++;
    if(j>=a&&j<=b)
  {  printf("%d",n);
   z++;
  if(z%10==0)
   printf("\n");
   else
   
    printf(" ");}
     else if(j>b)
     break;
   }

}
  printf("\n");
return 0;}
