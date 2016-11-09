# include <stdio.h>
int main()
{
   int n;
   char ch[2];
   scanf("%d%s",&n,ch);
   long a[105],b[105];
   b[1] = a[1] = 1;
   int i,j,k;
   for (i=2;i<=100;i++)
       {
        a[i] = a[i-1] + 2*(2*i-1);
        b[i] = 2*i-1;
       }
   for (i=1;n>=a[i+1];i++);
   int ans = n - a[i];
   n = i;
   for (i=n;i>=1;i--)
   {
       for (j=0;j<n-i;j++)
         printf(" ");
       for (j=0;j<b[i];j++)
        printf("%c",ch[0]);
        printf("\n");
   }
   for (i=2;i<=n;i++)
   {
        for (j=0;j<n-i;j++)
         printf(" ");
       for (j=0;j<b[i];j++)
        printf("%c",ch[0]);
        printf("\n");
   }
   printf("%d\n",ans);
}
} 
