#include<stdio.h>
int paixu(int a[ ]);
int main()
{ int b[4]={0},x,y,k,i;
 scanf("%d",&k);
 for(i=0;i<=3;i++) 
{
 b[i]=k%10;
 k/=10; }
 if(b[0]==b[1]&&b[1]==b[2]&&b[2]==b[3])
 printf("%d%d%d%d - %d%d%d%d = 0000\n",b[0],b[1],b[2],b[3],b[0],b[1],b[2],b[3]);
 else
 {
 paixu(b);
 while(b[0]*1000+b[1]*100+b[2]*10+b[3]!=7641)
 {
  printf("%d%d%d%d - %d%d%d%d = ",b[0],b[1],b[2],b[3],b[3],b[2],b[1],b[0]);
x=b[0]*1000+b[1]*100+b[2]*10+b[3];
y=b[3]*1000+b[2]*100+b[1]*10+b[0];
b[0]=(x-y)/1000;
b[1]=(x-y-b[0]*1000)/100;
b[2]=(x-y-b[3])%100/10;
b[3]=(x-y)%10;

printf("%d%d%d%d\n",b[0],b[1],b[2],b[3]);
 paixu(b);
 }
 }
 return 0;
}
                  
int paixu(int a[])
{ int i,j;
for(i=0;i<=3;i++)
{
for(j=i+1;j<=3;j++)
{if(a[i]<a[j])
{
a[i]=a[i]^a[j];
a[j]=a[j]^a[i];
a[i]=a[i]^a[j];
}
}
}
}
                                          
