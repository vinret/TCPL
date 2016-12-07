#include <stdio.h>
void sus(int a[]);
int main()
{
 int n,m,x,y,a[4]={0},r,i,j;
 printf("输入一个四位且各位不完全相同的整数n\n");
 scanf("%d",&n);
 m=n;
 for(i=0;i<4;i++)
{
  r=n%10;
  a[i]=r;
  n/=10;};
if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3])
printf("%d-%d=0\n",m,m);
else
{ 
  sus(a);
  while(a[0]*1000+a[1]*100+a[2]*10+a[3]!=7641)
 {
  x=a[0]*1000+a[1]*100+a[2]*10+a[3];
  y=a[3]*1000+a[2]*100+a[1]*10+a[0];
  m=x-y;
  printf("%d%d%d%d-%d%d%d%d=%d\n",a[0],a[1],a[2],a[3],a[3],a[2],a[1],a[0],m);
  for(i=0;i<4;i++)
 { a[i]=m%10;
   m/=10;};
   sus(a);  
};x=a[0]*1000+a[1]*100+a[2]*10+a[3];
  y=a[3]*1000+a[2]*100+a[1]*10+a[0];
  printf("%d%d%d%d-%d%d%d%d=6174\n",a[0],a[1],a[2],a[3],a[3],a[2],a[1],a[0]);

}
return 0;
 }
void sus(int a[])
{
 
 int r,i,g;
 for(g=0;g<3;g++)
 {
  for(i=0;i<3;i++)
 {
  if(a[i]<a[i+1])
 {
  r=a[i+1];
  a[i+1]=a[i];
  a[i]=r;
 }};};
}
