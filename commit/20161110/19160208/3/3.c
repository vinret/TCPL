#include<stdio.h>
void print_hex(int a);
int main()
{
int a;
scanf("%d",&a);
print_hex(a);
return 0;
}

void print_hex(int a)
{int c[100],b,i=0;
 while (a!=0)
  {c[i]=a%16;
   a=a/16;
   i++;}
 b=i-1;
 for (i=b;i>=0;i--)
   if (c[i]>9)
     printf("%c",c[i]+87);
    else
      printf("%d",c[i]);
 printf("\n");
}


