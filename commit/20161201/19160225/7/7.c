#include<stdio.h>
#include<string.h>
int main(){
int a[100][100],b[100][100],c[100][100],m,n,r,i,j,k;
memset(c,0,sizeof(int)*10000);
scanf("%d%d%d",&m,&n,&r);
for (i=1;i<=m;++i)
    for (j=1;j<=n;++j)
        scanf("%d",&a[i][j]);
for (i=1;i<=n;++i)
    for (j=1;j<=r;++j)
        scanf("%d",&b[i][j]);
for (i=1;i<=m;++i)
    for (j=1;j<=r;++j)
        for (k=1;k<=n;++k)
             c[i][j]+=a[i][k]*b[k][j];
for (i=1;i<=m;++i){
for (j=1;j<=r-1;++j)
    printf("%d ",c[i][j]);
printf("%d\n",c[i][r]);
}
return 0;
}

