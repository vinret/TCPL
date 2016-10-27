#include<stdio.h>
int main()
{
    int n;
    int a[40];
    int i,k;
    printf("Enter n= ");
    scanf("%d",&n);
    printf("The hexadecinal=%x\n",n);
    printf("The octonary=%o\n",n);
  
   for(i=0;n!=0;i++)
    {
      a[i]=n%2;
      n=n/2;
    }
     for(k=i-1;k>=0;k--)
      printf("%d",a[k]);
    return 0;
}
