#include <stdio.h>
void triangle_judge(int a,int b,int c);
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
triangle_judge(a,b,c);
return 0;
}
void triangle_judge(a,b,c)
{
if(a+b>c&&a+c>b&&b+a>c)
{{if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) printf("直角");
  if((a==b&&b!=c)||(a==c&&c!=b)||(b==c&&c!=a)) printf("等腰");
  if(a==b&&b==c) printf("等边");
  if(a!=b&&a!=c&&b!=c&&a*a+b*b!=c*c&&a*a+c*c!=b*b&&b*b+c*c!=a*a) printf("普通");
}  
  printf("三角形");
}
else printf("错误！");
}
