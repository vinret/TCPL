#ifndef Book_H_
#define Book_H_
struct Book
{
  char ISBN[14];
  char name[60];
  char author[20];
  float price;
  struct Book *next;
};
typedef struct Book Book;
struct Book*creat_list()
{
 FILE*fp;
 int i;
 if((fp=fopen("boos.scv","r"))==NULL)
{
  printf("打开文件失败！\n");
  exit(1);
}
Book *head=(Book*)malloc(sizeof(Book));
Book *p=head;
while(!feof(fp))
{
  Book*newp=(Book)malloc(sizeof(Book));
  fcanf(fp,"%s%s%s%f",newp->ISBN,newp->name,newp->author,&newp->price);
  if(feof(fp))
{
  p->next=NULL;
  head=head->next;
  return head;
}
p->next=newp;
p=newp;
p->next=NULL;
}
}
Book*search(Book*head,const char*ISBN);
Book*update(Book*head,const char*ISBN);
void insert(Book*head);
void delete(Book*head,const char*ISBN);
int load(Book*head,const char*filename);
int save(Book*head,const char*filename);
#endif
