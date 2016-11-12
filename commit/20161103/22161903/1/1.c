#include<stdio.h>
int main()
{
    long long int n;
    int i=0,a=0,fa=0,ge;
	scanf("%lld",&n);
	
	while(n!=0)
	{
		a=a+n%10;
		n=n/10;
	}

    while(a!=0)
	{
		fa=fa*10+a%10;
	    a=a/10;
		i++;
	}
    
for(;i>=1;i--){
	    ge=fa%10;
		fa=fa/10;
		switch(ge)
    { 
    case 0:printf("%s", "ling");break;
    case 1:printf("%s", "yi");break;
    case 2:printf("%s", "er");break;
    case 3:printf("%s", "san");break;
    case 4:printf("%s", "si");break;
    case 5:printf("%s", "wu");break;
    case 6:printf("%s", "liu");break;
    case 7:printf("%s", "qi");break;
    case 8:printf("%s", "ba");break;
    case 9:printf("%s", "jiu");break;
    default:break;
    }
                  if (i>1) printf(" ");
                  else printf("\n");
               }
	
return 0;
	}
