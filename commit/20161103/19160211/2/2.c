#include <stdio.h>
int main()
{
  int a,b,i,j;
  scanf("%d",&a);
  int c[a][3];
  for(i=0;i<a;i++)
   {
     scanf("%d %d %d",&c[i][0],&c[i][1],&c[i][2]);
    };
  int d,e,f;
  for(i=0;i<a;i++)
   { b=i+1;
     d=c[i][0];
     e=c[i][1];
     f=c[i][2];
     if((d+e)>f)
     printf("Case #%d: ture\n",b);
     else
     printf("Case #%d: fales\n",b);
   };
   return 0;
}
