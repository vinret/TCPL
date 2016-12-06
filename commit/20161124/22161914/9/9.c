#include<stdio.h>
#define length 4
int main()
{
    int num,i,j,t;
    int min=0,sub=0,diff=0,pow=1;
    int array[length]={0};
    scanf("%d",&num);
    while(1){
     if(num%1111==0){
     printf("%d-%d=0000",num,num);
     break;
}
     min=sub=diff=0;
     pow=1;
     for(i=0;i<length;i++){
     array[i]=num%10;
     num/=10;
}
     for(i=0;i<length;i++){
     for(j=i;j<length;j++){
     if(array[i]>array[j]){
     t=array[i];
     array[i]=array[j];
     array[j]=t;
}
}
}
     for(i=0;i<length;i++){
     min+=pow*array[i];
     sub+=pow*array[length-i-1];
     pow*=10;
}
     diff=min-sub;
     printf("%04d-%04d=%04d",min,sub,diff);
     if(diff!=6174){
     putchar('\n');
     num=diff;
}
     else
      break;
}
      return 0 ;
}

