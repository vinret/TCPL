#include<stdio.h>
int main()
{
int A,B,D,s,i;
scanf("%d %d %d",&A,&B,&D);
s=A+B;
i=1;
int c[32];
if(s!=0)
{
while(s/D!=0)
{
c[i]=s%D;
s=s/D;
i++;
}
c[i]=s%D;
for (i=i;i>=1;i--)
printf("%d",c[i]);
printf("\n");
}
else 
printf("0\n");
return 0;

}

