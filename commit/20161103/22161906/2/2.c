nclude<stdio.h>
int main()
{
    long long  A,B,C;
    int T;
    int i=1;
    printf("Please input T:");
    scanf("%d",&T);
    while(i<=T)
  {
    scanf("%11d%11d%11d",&A,&B,&C);
    if(A+B>C)
      printf("Case #%d: ture\n",i);
    else
     printf("Case #%d: fasle\n",i);
    i++;
  }
    return 0;
}
