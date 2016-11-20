int Factorial(const int n)
{
if(n>=0)
{
int i;
int fact=1;
for(i=2;i<=n;i++)
fact*=i;
return fact;
}
else 
return 0;
}
