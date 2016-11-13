#include <stdio.h>
//#include <stdlib.h>
int getnum(char ch[],int c){
 int i=0,digit=0,d_dig=1;
  int num=0;
 for(;ch[i]!='\0';i++)
 {
  if(ch[i]-'0'==c)
      digit++;
					    }
for(i=0;i<digit;i++)
{
    if(i==0)
         num=c;
     else{
																	            d_dig*=10;       //d_dig注意不要溢出
																				num+=(c*d_dig);
																			        }
							    }
																			    if(c==0)
																			    num=0;
									 									    return num;
																							}
																				int main(){
																			    //freopen("in.txt","r",stdin);
																			    //freopen("out.txt","w",stdout);
																			    char A[15];int a,a_digit=0;
																			    char B[15];int b,b_digit=0;
																				    int sum=0;
																				    scanf("%s%d%s%d",A,&a,B,&b);
																			    sum=getnum(A,a)+getnum(B,b);
																					    printf("%d",sum);
																						return 0;

	}

