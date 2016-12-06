#include<stdio.h>
int main()
{
  int i,j,n,min,max;
  int a[4];
  scanf("%d",&n);
  do{
      for(i=0;i<4;i++)
      {
        a[i]=n%10;
        n=n/10;
      }
      for(i=1;i<4;i++)
        for(j=0;j<4-i;j++)
        {
          if(a[j]>a[j+1])     
          { a[j]=a[j]^a[j+1];
            a[j+1]=a[j+1]^a[j];
            a[j]=a[j]^a[j+1];
          }  
        }
      max=a[0]+10*a[1]+100*a[2]+1000*a[3];
      min=a[3]+10*a[2]+100*a[1]+1000*a[0];
      n=max-min;
      printf("%04d - %04d = %04d\n",max,min,n);
    }while(n!=6174&&n!=0);
  return 0;
}

