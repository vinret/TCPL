#include<stdio.h>
int is_prime(int n)
{
 int i;
 for(i=2;i<=n-1;++i)
 if(n%i==0) break;
 if(i<n) return 0;
 else return i;
}

int main()
{
 int n,i,k=1,M,N,x,s[10001],l;
 for(l=0;l<10001;++l)
 {
  s[l]=0;
 }
 l=1;
 scanf("%d%d",&M,&N);
 for(n=2;k<M;++n)
 {
  i=is_prime(n);
  if(i) ++k;
  }
  for(n=n;k<=N;++n)
  {
   i=is_prime(n);
   if(i)
   {
    s[l]=n;
    ++l;
    ++k;
   }
   for(l=1;l<10001;++l)
   {
    if(l%10==0)
      {
       printf("%d\n",s[l]);
       ++l;
       }
    if(l==N-M+1)
    {
     printf("%d\n",s[l]);
     break;
     }
    printf("%d ",s[l]);
    }
    return 0;
    }
}

