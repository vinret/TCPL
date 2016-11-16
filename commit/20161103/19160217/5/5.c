#include<stdio.h>
#include<string.h>
int main()
{
 char c[100001];
 gets(c); 
 int n=0;

    for(int i=0;i<strlen(c);i++)
{
       if(c[i]>='a'&&c[i]<='z')
          n+=c[i]-'a'+1;
       if(c[i]>='A'&&c[i]<='Z')
          n+=c[i]-'A'+1;
}
      

     int a=0,b=0;
     while(n)
{
     if(n&1)
        b++;
     else
        a++; 
     n/=2;
}
 printf("%d %d",a,b);
return 0;
   
}










