#include<stdio.h>

#include<string.h>

int main()

{

         char a[100000];

         int k=0,j,i,sum=0,b[20],m=0,n=0,c=0;

         fgets(a,100000,stdin);

         for(i=0;i<strlen(a);i++)

         {

                  for(j=0;j<=25;j++)

                  {

                          if((int)a[i]==j+65||(int)a[i]==j+97)

                                   sum=sum+j+1;

                  }

         }

         do

         {

                  b[k]=sum%2;

                  sum=sum/2;

                  c++;

                  k++;

         }

         while(sum!=0);

         for(k=0;k<c;k++)

         {

                  if(b[k]==0)

                          m++;

                  else

                          n++;

         }

         printf("%d %d\n",m,n);

         return 0;

}
