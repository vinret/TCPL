#include<stdio.h>
void input(int a[],int n);
void output(int a[],int n);
void sort(int a[],int n);
int main()
{
int score[10];
printf("please input the scores:\n");
input(score,10);
output(score,10);
sort(score,10);
printf("after sort:\n");
output(score,10);
return 0;
}


void input(int a[],int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}

void output(int a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d  ",a[i]);
printf("\n");
}

void sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
for(j=0;j<n-1-i;j++)
if(a[j]>a[j+1])
{
temp= a[j];
a[j]= a[j+1];
a[j+1]= temp;
}
}
