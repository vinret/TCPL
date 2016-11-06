#include<stdio.h>
int  main()
{
     int x,a,b,c;
     printf("please input a three integers:\n");
     scanf("%3d",&x);
     a=x/100;
     b=(x-a*100)/10;
     c=x-a*100-b*10;
     if(c!=0)
     printf("%d%d%d\n",c,b,a);
     else if(c=0,b!=0)
     printf("%d%d\n",b,a);
     else 
     printf("%d\n",a);
      return 0;
}
