#include<stdio.h>
int main(){
int n,m,i,f[10000];
scanf("%d%d",&n,&m);
m=m%n;
for (i=0;i<=n-1;++i)
    scanf("%d",&f[i]);
for (i=n-m;i<=2*n-m-2;++i)
    printf("%d ",f[i%n]);
printf("%d\n",f[(2*n-m-1)%n]);
return 0;
}
