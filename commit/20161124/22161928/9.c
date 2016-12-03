#include<stdio.h>
int main()
{
    int N,a[4],x,i,j,bigger,smaller;
    scanf("%d%d%d%d%d%d",&N,&bigger,&smaller,&i,&j,&x);
    if(N%1==0||N%11==0||N%111==0||N%1111==0)
      printf("%d-%d=0\n",N,N);
    else
      {
       do{  
         for(i=0;i<4;i++)
         {
             a[i]=N%10;
             N/=10;
         } 
         for(j=0;j<3;j++)
         {
            for(i=0;i<3-j;i++)
            {
            if(a[i]>a[i+1])
              {
               x=a[i+1];
               a[i+1]=a[i];
               a[i]=x;
              }
            }
         }
         bigger=a[3]*1000+a[2]*100+a[1]*10+a[4]*1;
         smaller=a[0]*1000+a[1]+100+a[2]*10+a[3]*1;
         N=bigger-smaller;
         printf("%04d-%04d=%04d\n",bigger,smaller,N);
         }
         while(N!=6174);
    }
    return 0;
}
