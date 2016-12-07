#include<stdio.h>
int main()
{
int n,m,i;
scanf("%d%d",&n,&m);
int a[n];
for(i=0;i<n;i++){
if(i<n-m%n){
scanf("%d",&a[i+m%n]);
}
else{
scanf("%d",&a[i-n+m%n]);
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
return 0;
}
