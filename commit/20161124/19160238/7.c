#include <stdio.h>
int main()
{
   int n,m,i;
   scanf("%d %d",&n,&m);
   int a[n-1];
   for(i=0;i<n;++i)
    {
      if(i+m<n) scanf("%d",&a[i+m]);
      else 
       {
          while(i+m-n>=n) m-=n;
          scanf("%d",&a[i+m-n]); }
       } 
    for(i=0;i<n-1;++i) printf("%d ",a[i]);
    printf("%d",a[i]);
    return 0;
}
