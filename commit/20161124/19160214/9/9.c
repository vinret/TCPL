#include<stdio.h>
int main()
{
    int n,i,j;
    int a[4];
    int temp,max,min;
    printf("please input a four figures:");
    scanf("%d",&n);
    while(n!=6174 && n!=0)
  {for(i=0;i<4;i++)
   {a[i]=n%10;
    n=n/10;
   }
    for(i=0;i<4;i++)
    for(j=0;j<3;j++)
   {if(a[j]>a[j+1])
    {temp=a[j];
    a[j]=a[j+1];
     a[j+1]=temp;
    }
   }
    max=a[0]+a[1]*10+a[2]*100+a[3]*1000;
    min=a[3]+a[2]*10+a[1]*100+a[0]*1000;
    n=max-min;

    printf("%d-%d=%d\n",max,min,n);

}
    return 0;
}

