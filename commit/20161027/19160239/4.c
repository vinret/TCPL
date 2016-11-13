#include<stdio.h>
int main()
{
                int sum,hang,leave,half;
                int n,j,a;
                sum=0;
                a=1;
                char c;
                scanf("%d %c",&n,&c);
                half=(n-1)/2;
                while(sum<=half){
                                a=a+2;
                                sum=sum+a;
                }
                sum=sum-a;
                a=a-2;
                hang=1;
                leave=n-sum*2-1;
                while(a>0){
                                for(j=1;j<hang;j+=1)
                                                printf(" ");
                                for(j=1;j<=a;j++)
                                                printf("%c",c);
                                printf("\n");                               
                                a-=2;
                                hang++;
                }
                a+=4;
                hang-=2;
                while(hang>0){
                                for(j=1;j<hang;j+=1)
                                                printf(" ");
                                for(j=1;j<=a;j++)
                                                printf("%c",c);
                                printf("\n");
                                a+=2;
                                hang--;
                }
                while(leave!=0){
                        printf("%d\n",leave);
                }
                return 0;
}
