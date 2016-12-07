#include<stdio.h>
int LCM(int m,int n);
int main()
{printf("please input m,n:\n");
 int m,n,s;
 scanf("%d%d",&m,&n);
  s=m*n;
 m=LCM(m,n);
 printf("LCM is %d\n",s/m);
return 0;
}
int LCM(int m,int n)
{int i,s;
 if(m<n)
 {int c=m;
  m=n;
  n=c;}
while(i!=0)
{i=m%n;
 m=n;
  n=i;
}
return m;
}

