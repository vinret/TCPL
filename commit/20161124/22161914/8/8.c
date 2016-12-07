#include<stdio.h>
#include<math.h>

int main()
{
    int n,m,k,i,j,t=0;
    int num[10000]={0};
    scanf("%d %d",&n,&m);
    k=m/n+1;
    for(i=n;t<m;i++)
{
    for(j=2;j<(int)(sqrt(i));j++)
      if(!(i%j))
       break;
      if(j>(int)sqrt(i))
       num[t++]=i;
}
     for(i=0;i<k;++i)
     for(j=0;j<10;++j)
{
     if(n++<=m)
{
     if((j<9) && (n<=m))
     printf("%d ",num[n-2]);
    else if(((j<9) && (n>m)) || (9==j))
    printf("%d\n",num[n-2]);
}
}
    return 0
}
