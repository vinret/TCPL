 #include <stdio.h>
 int main ()
{
 int a,b;
 printf("please input number a(a>3):");
 scanf ("%d",&a);
  for (b=2;b<=a-1;b++)
    if (a%b==0)
  break ;
    if (b<a)
 printf("%d  is not a prime number\a",a);
   else
 printf ("%d is a prime number\a",a);
   return 0;
}

    
