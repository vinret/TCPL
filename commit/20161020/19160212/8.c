#include<stdio.h>
int main()
{int b,i,c,x, a[30];
 scanf("%d",&b);
x=b;
while(b!=0)
 {i=b%2;
  a[c]=i;
 c++;
 b=b/2;
}
c--;
for(;c>=0;c--)
 {
 printf("%d",a[c]);
}
printf("\n");
printf("Hexadecimal %x\n",x);
printf("Octal %o\n",x);

 return 0;
}

