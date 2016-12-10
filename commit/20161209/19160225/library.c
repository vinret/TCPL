#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct book{
char name[1000],auther[1000],isbn[1000];
double price;
struct book *l,*r;
}book;
book *head,*tail;
void pre(){
printf("Please input your operation:\n");
printf("0:halt;\n");
printf("1:add(Total is required.);\n");
printf("2:query;\n");
printf("3:delete;\n");
printf("4:revise;\n");
return;
}
void print(){
FILE *write=fopen("save.csv","w");
if (head!=tail){
    book *q=head->r;
    while (q!=tail){
      fprintf(write,"%s,%s,%s,%lf\n",q->name,q->auther,q->isbn,q->price);
      q=q->r;
          }   
        fprintf(write,"%s,%s,%s,%lf\n",q->name,q->auther,q->isbn,q->price);
    }
fclose(write);
return;
}
book *search(char s[1000]){
if (head==tail) return;
book *q=head->r;
while (q){
if (!strcmp(q->name,s)) return q;
q=q->r;
}
return q;
}
int main(){
FILE *fp=fopen("output.csv","w");
pre();
int operation;
scanf("%d",&operation);
head=(book*)malloc(sizeof(book));
head->l=0;
head->r=0;
tail=head;
while (operation){
book *q,*qq;
int num,i;
char s[1000];
switch(operation){
case 1:scanf("%d",&num);
   for (i=1;i<=num;++i){
       q=(book*)malloc(sizeof(book));
           scanf("%s%s%s%lf",q->name,q->auther,q->isbn,&q->price);
           q->l=tail;
           q->r=0;
           tail->r=q;
           tail=q;
       }
           print();
       break;
case 2:scanf("%s",s);
       q=search(s);
       fprintf(fp,"%s,%s,%s,%lf\n",q->name,q->auther,q->isbn,q->price);
       break;
case 3:scanf("%s",s);
       q=search(s);
       qq=q->l;
       qq->r=q->r;
       if (q->r) q->r->l=qq;
                 else tail=qq;
       free(q);
       print();
       break;
case 4:scanf("%s",s);
       q=search(s);
       print;
       scanf("%s%s%s%lf",q->name,q->auther,q->isbn,&q->price);
       print();
       break;
}
pre();
scanf("%d",&operation);
}
while(head!=tail){
 head=head->r;
 free(head->l);
}
free(head);
fclose(fp);
return 0;
}
