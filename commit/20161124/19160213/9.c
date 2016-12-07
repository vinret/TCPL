#include<stdio.h>

int kaprekar(int m,int *a)
{
int i,j,result,one,two,temp,b=m;
for(i=0;i<4;i++)
{
a[i]=m%10;
m=m/10;
}
if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
{
printf("%04d-%04d==0000\n",b,b);
return 0;
}
else
{
for(i=0;i<3;i++)
{
for(j=i+1;j<4;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
one=a[3]*1000+a[2]*100+a[1]*10+a[0];
two=a[0]*1000+a[1]*100+a[2]*10+a[3];
result=one-two;
printf("%04d-%04d=%04d\n",one,two,result);
if(result==6174)
return 0;
else
return kaprekar(result,a);
}
}

int main()
{
int m,a[4];
scanf("%d",&m);
kaprekar(m,a);
return 0;
}
