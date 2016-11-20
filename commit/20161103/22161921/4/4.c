#include<stdio.h> 
#include<string.h> 
 int main() 
 { 
   int i,j,l,max,k=0; 
   char min; 
   char a[1001]; 
   char d[1001]; 
  char b[1001]={0}; 
   gets(a); 
   l=strlen(a); 
   for(i=0;i<l;i++) 
   { 
     if(a[i]>='A'&&a[i]<='Z') 
     { 
        
       a[i]=a[i]+32; 
     } 
     b[a[i]]++; 
   } 
   max=b[a[0]]; 
   for(i=0;i<l;i++) 
   { 
     if(max<=b[a[i]]&&a[i]>='a'&&a[i]<='z') 
     { 
       max=b[a[i]]; 
         d[k++]=a[i];   
     } 
      
   } 
   min=d[0]; 
   for(i=0;i<k;i++) 
   { 
     if(min>d[i]) 
     min=d[i]; 
   } 
    
   printf("%c %d\n", min,max); 
   return 0; 
  }  
 

