#include<stdio.h>
int LCM(int m,int n){
int ans=m*n;
while (m){
int tmp=m;
m=n%m;
n=tmp;
}
return ans/n;
}
int main(){
int m,n;
scanf("%d%d",&m,&n);
printf("%d\n",LCM(m,n));
return 0;
}

