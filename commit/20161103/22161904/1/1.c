#include<stdio.h>
#include<math.h>
int main()
{
  int n,sum=0,i,j,sum_;
  scanf("%d",&n);
  while(n%10!=0)
  {
    sum+=n%10;
    n/=10;
  }
  printf("%d\n",sum);
  sum_=sum;
  for(i=0;sum!=0;sum/=10) i++;
  printf("%d\n",i);
  while(i>0)
  {
    j=sum_/pow(10,i-1);
    sum_=sum_-j*pow(10,i-1); 
    switch(j)
    {
      case 0:printf("ling");break;
      case 1:printf("yi");break;
      case 2:printf("er");break;
      case 3:printf("san");break;
      case 4:printf("si");break;
      case 5:printf("wu");break;
      case 6:printf("li");break;
      case 7:printf("qi");break;
      case 8:printf("ba");break;
      default:printf("jiu");
    }
    i--;
    if(i>0) printf(" ");
    else printf("\n");
  }
    return 0;
}
