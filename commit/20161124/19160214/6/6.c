#include<stdio.h>
int count1_in_bin(int n);
int main()
{int n;
scanf("%d",&n);
printf("the count of 1 is %d\n",count1_in_bin(n));
return 0;
}
int count1_in_bin(int n)
{int a,i=0;
while(n!=0)
 {a=n%2;
 if(a==1)
 { i++;}
  n=n/2;
}
return i;
}
