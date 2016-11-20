#include<stdio.h>

void print_hex(int a);

int main()

{

         int a;

         scanf("%d",&a);

         print_hex(a);

         return 0;

}

void print_hex(int a)

{

         int b[10],i;

         for(i=1;a>0;i++)

         {

                  b[i]=a%16;

                  a=a/16;

         }

         for(i=i;i>=1;i--)

         {

                  if(b[i]>=0 &&b[i]<=9)

                          printf("%d",b[i]);

                  else

                  {

                          if(b[i]>=10&&b[i]<=15)

                  {

                          switch(b[i])

                          {

                          case 10:printf("A");break;

                          case 11:printf("B");break;

                      case 12:printf("C");break;

                          case 13:printf("D");break;

                          case 14:printf("E");break;

                          default:printf("F");

                          }

                  }

                  }

         }

         printf("\n");

}
