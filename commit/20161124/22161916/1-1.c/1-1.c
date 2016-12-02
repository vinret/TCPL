#include<stdio.h>
int GCD_recursive(int m,int n);
int main()
{
    int m,n;
    int k=GCD_recursive(m,n);
    printf("m=%d,n=%d",m,n);
    scanf("%d,%d",&m,&n);
    printf("%d",k);
    return 0;
}
int GCD_recursive(int m,int n)
{
    int i=2,a[100];
    int max=m>n?m:n,min=m<n?m:n;
    a[0]=max%min;
    if(a[0]==0)  return min;
    else a[1]=min%a[0];
    if(a[1]==0) return a[0];
    else{
                for(i=2;a[i-1]!=0;i++)
                       a[i]=a[i-2]%a[i-1];
}
return a[i-2];
}

 
    
