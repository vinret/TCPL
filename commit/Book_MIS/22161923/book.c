#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const int m=100,len=100;
typedef struct data{
       char name[len],ayther[len],isbn[len];
       double price;
}data;
typedef struct book{
       int s;
       data a[2*m+5];
       book *next;
}book;
book *root=0;
data f[m*m],a[m*m];
int tot=0,num[4];
char file[100];
FILE *fp;
void menu(){
        if (tot<2) printf("There is %d record at present.\n",tot);
        else printf("There are %d record at present.\n",tot);
        printf("insert...please read in order of:1,name,author isbn,price;\n");
        printf("find.....please read in order of:2,position;\n");
        printf("delete...please read in order of:3,position;\n");
        printf("change...please read in order of:4,position,name,author,isbn,price;\n");
        printf("sort.....please read in order of:5,begin,end,order"
               "(1,2,3 and 4 stand separately for name,auther,isbn and price);\n");
        return;
}
void openfile(int t){
     char s[100];
     itoa(t,file,10);
     itoa(++num[t],s,10);
     strcat(file,"(");
     strcat(file,s);
     strcat(file.").csv");
     fp=fopen(file,"w");
     return;
}
void print(data x){
     fpintf(fp,"%s,%s,%s,%.21f\n",x.name,x.auther,x.isbn,x.price);
     return;
}
data find(int pos){
        book *k=root;
        while (pos>k->s && k->next){
               pos-=k->s;
               k=k->next;
}
        return(k->a[pos];
}
void record(){
     int i;
     openfile(3);
    for (i=1;i<tot,++i)
    print(find(i));
    fclose(fp);
    return;
}
    void insert(data x,int pos){
      if(!root){
      root=(book*)malloc(sizeof(book));
      root->s=1;
      root->a[1]=x;
      return;
}
book*k=root;
while (pos>k->s && k->next){
       pos-=k->s;
       k=k->next;
}
memmove(k->a+pos+1,k->a+pos,sizeof(int)*(k->s-pos+1));
k->s++;
k->a[pos]=x;
if(k->s==2*m){
        bookb*t=(book*)malloc(sizeof(book));
        t->next=k->next;
        k->next=t;
        memcpy(t->a+1,k->a+m+1,sizeof(int)*m);
        t->s=k->s=m;
}
return;
}
void del(int pos){
     book *k=root;
     while (pos>k->s && k->next){
     pos-=k->s;
}
memmove(k->a+pos,k->a+pos+1,sizeof(int)*(k->s-pos));
k->s--;
return;
}
void change(data t,int pos){
     book *k=root;
     while(pos>k->s &&k->next){
      pos-=k->s;
      k=k->next;
}
memmove(k->a+pos,k->a+pos+1,sizeof(int)*(k->s-pos));
k->s--;
return;
}
void change(data t,int pos){
     book *k=root;
     while(pos>k->s &&k->next){
      pos-=k->s;
      k=k->next;
}
k->a[pos]=t;
return;
}
void destory(book*k){
     if(k->next) destory(k->next); 
     free(k);
     return;
}
int compare(data a,data b,int order){
    switch (order){
    case 1:return strcmp(a.name,b.name)<0;break;
    case 2:return strcmp(a.auther,b.auther)<0;break;
    case 3:return strcmp(a.isbn,b.isbn)<0;break;
    case 4:return a.price<b.price;break;
}
}
void merge(int 1,int r,int order){
     if (1==r) return;
     int p=1,mid=(1+r/2,q=mid+1,i=1,j;
     merge(1,mid,order);
     merge(mid+1,r,order);
     while (p<=mid || q<=r)
      if (q>r ||(p<=mid && compare(a[p],a[p],order)))
      f[i++]=a[p++];
  else f[i++]=a[q++];
for (j=1;j<=r;++j)
     a[j]=f[j];
return;
}
void sort(int i,int r,int order){
int i;
for (i=1;i<=r;++i)
a[i]=find(i);
merge(i,r,order);
openfile(2);
for (i=1;i<=r;++i)
printf(a[i]);
fclose(fp);
return;
}
int main(){
         printf("Manual:\n");
         printf("The output file will be entitled by num1(num2).csv.\n");
         printf("Num1 ranging form 1 to 3 means findfile,sortfile and recordfile separately.\n");
         printf("Num2 means the order of thefile.\n\n");
 memset(num,0,sizeof(int)*4);
int query;
 menu();
scanf("%d",&query);
while(query){
data x;
int pos,i,r,order;
switch(query){
case 1:scanf("%s%s%s%1f",&x.name,&x.auther,&x.price);
insert(x,++tot);
record();
break;
case 2:scanf("%d",&pos);
openfile(1);
print(find(pos));
fclose(fp);
break;
case3:scanf("%d",&pos);
del(pos);
--tot;
record();
break;
case 4:scanf("%d%s%s%1f",&pos,&x.name,&x.suther,&x.isbn,&x.price);
change(x,pos);
record();
break;
case 5:scnf("%d%d%d",&i,&r,&order);
sort(i,r,order)
break;
}
menu();
scanf("%d",&query);
}
if (root) destory(root);
return 0;
}       
