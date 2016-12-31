#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    int a[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<m;i++)
    {
    k=a[n-1];
    for(j=n-1;j>0;j--)
    a[j]=a[j-1];
    a[0]=k;
    }
 
    for(i=0;i<n;i++)
    {
    if(i<n-1)
    printf("%d ",a[i]);
    else
    printf("%d\n",a[i]);
    }
    
    return 0;
}
