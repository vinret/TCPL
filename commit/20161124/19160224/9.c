#include <stdio.h>
int kaprekar(int m,int *n)
{ 
 int i,j,former,latter,dif,temp=m;
 for(i=0;i<4;++i)
{ 
   n[i]=m%10;
   m/=10;
    }
	if(n[0]==n[1]&&n[1]==n[2]&&n[2]==n[3])
 {
   printf("%04d - %04d = 0000\n",temp,temp);
    return 0;
	}
	else
   {
   for(i=0;i<3;++i)
   {
   for(j=i+1;j<4;++j)
   {
 if(n[i]>n[j]) { n[i]=n[i]^n[j]; n[j]=n[i]^n[j]; n[i]=n[i]^n[j];
 }
 }
		    }
													  
   former=n[3]*1000+n[2]*100+n[1]*10+n[0];
 latter=n[0]*1000+n[1]*100+n[2]*10+n[3];
  dif=former-latter;
  printf("%04d - %04d = %04d\n",former,latter,dif);
   if(dif==6174)
   return 0;
  else return kaprekar(dif,n);
 }
			}

		int main()
		{
		int integer,a[4]={0};
		int *n;
	  scanf("%d",&integer);
	 n=a;
	kaprekar(integer,n);
	  return 0;
	  }













