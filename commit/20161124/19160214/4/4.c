#include<stdio.h>
#include<math.h>
int is_int_pal(int n);
int main()
{int n;
 printf("please input a number\n");
 scanf("%d",&n);
 if(is_int_pal(n))
 printf("%d is a palindrome number\n",n);
 else
 printf("%d is not a palindrome number\n",n);
return 0;
}
int is_int_pal(int n)
{int i,s=0,a,N,M; 
   N=n;
   M=n;
 for(i=0;M!=0;i++)
{M=M/10;}
  for(i=i-1;n!=0;i--)
{a=n%10;
 n=n/10;
 double m=pow(10,i);
  s=s+a*m;
}
if(s!=N)
return 0;
else 
return -1;
} 
