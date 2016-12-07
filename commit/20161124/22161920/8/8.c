#include<stdio.h>
#include<math.h>
void sushu(int m,int n);
int main()
{
int m,n;
scanf("%d%d",&m,&n);
sushu(m,n);
return 0;
}

void sushu(int m,int n)
{
int i,a,s=0;
int b,t=0;
for(b=2;t<n;b++){
a=sqrt(b);
for(i=2;i<=a;i++){
        if(b%i==0){
        break;}}
if(i>a){
t++;
if(t>=m){
printf("%d ",b);
s++;
if(s%10==0)
printf("\n");
}}
}}
