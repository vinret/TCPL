#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,m;
    printf("please input n(n>3):");
    scanf("%d",&n);
    m=sqrt(n);
    for(i=2;i<=m;i++){
                         if(n%i==0){
                                       printf("%d isn't the prime\n",n);

                                       return 0;
                                   }           
                     }
    printf("%d is the prime\n",n);

    return 0;
}
