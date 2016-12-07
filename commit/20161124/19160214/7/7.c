#include<stdio.h>
int i;
int s=0;
int main()
{int a[99];
int w,c;
scanf("%d%d",&w,&c);
c=w-c%w;
for(int i=0;i<w;i++)
{ scanf("%d",&a[i]);}
for(int i=c;i<w;i++)
{printf("%d ",a[i]);

}
int i=0;
for(i=0;i<c;i++)
{printf("%d",a[i]);
s++;
if(s!=w)
{printf(" ");
}
}
printf("\n");
return 0;
n
