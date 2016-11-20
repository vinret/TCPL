#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int i,sum=0;
   char py[10][5] = {"ling","yi","er","san",
     "si","wu","liu","qi","ba","jiu"};
   scanf("%s",&a);
   for(i=0;i<strlen(a);i++)
       sum +=a[i] - '0';
    char b[5];
   sprintf(b,"%d",sum);
   for(i=0;i<strlen(b);i++);
   {
    if(i>0) printf(" ");
    printf("%s",py[b[i]-'0']);
   }
   printf("\n");
   return 0;
}  
