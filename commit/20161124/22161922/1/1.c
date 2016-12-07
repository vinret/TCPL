 #include<stdio.h>
int GCD_recursive(int m, int n);

int GCD_recursive(int m, int n)
{
        while(m>0  &&  n>0)
        {
                if (m>n)
                m=m%n;
                else
                        n=n%m;
        }
       if(m==0)
        return n;
       else
        return m;
}

int main()
{
        int m,n,t;
        scanf("%d %d",&m,&n);
        printf("%d",GCD_recursive(m,n));
        return 0;
}
