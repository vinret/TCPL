#include<stdio.h>
#include<string.h>
int main()
{
  char c[100000];
  int a[1000],i,j,sum=0,k=0;
  fgets(c,100000,stdin);
  for(i=0;i<strlen(c);i++)
  {  
    for(j=1;j<27;j++)
    {  
      if((int)c[i]==j+64||(int)c[i]==j+96)
        sum+=j; 
    }  
  }
  while(sum!=0)
  {  
    i=sum%2;
    sum/=2;
    a[k++]=i; 
  }
  j=0;
  i=0;
  for(k--;k>=0;k--)
  {  
    if(a[k]==0)
       j++;
    else 
       i++; 
  }
  printf("%d %d\n",j,i);
  return 0;
}
