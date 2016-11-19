#include<stdio.h>
int main()
{
  long int a,b,c;
  int i=1,n;
  printf("请输入测试组数:");
  scanf("%d",&n);
   int f[n];
  while(i<=n)
  {
  	printf("请输入a,b,c的值:");
	scanf("%ld %ld %ld",&a,&b,&c);
	if(a+b>c)
	f[i]=0;
	else
	f[i]=1;
	i++;
  }
  for(i=1;i<=n;i++)
 {
   if(f[i]=0)
  printf("Case #%d: false\n",i);
  if(f[i]=1)
  printf("Case #%d: true\n",i);
}
return 0;
}
