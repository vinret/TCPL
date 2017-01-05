#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct  books_list
{
        char author[10000];
        char bookname[10000];
        char isbn[10000];
        float price;
        struct books_list * next; /*链表的指针域*/
};
 struct books_list*Create_Books_Doc();/*新建链表*/
 void insert(struct books_list*head);
 void search(struct books_list*head);
 void delete(struct books_list*head);
 void change(struct books_list*head);
 void save(struct books_list*head);/*保存数据至文件*/
 /*新建链表头节点*/
 struct books_list*Create_Books_Doc()
  {
  struct books_list*head;
  head=(struct books_list*)malloc(sizeof(struct books_list));/*分配头节点空间*/
  head->next=NULL;/*头节点指针域初始化，定为空*/
  return head;
  }
 /*保存数据至文件*/
 void save(struct books_list*head)
 {
    struct books_list*p;
    FILE *fp;
    p=head;
    fp=fopen("data.csv","w+");/*读写建立一个文件*/
    fprintf(fp,"┌───────┬───────┬───────┬───────┐\n");/*向文件输出表格*/
    fprintf(fp,"│ ISBN  │ 书名  │  作者 │  价格 │\n");
    fprintf(fp,"├───────┼───────┼───────┼───────┤\n");/*指针从头节点开始移动，遍历至尾节点，依次输出图书信息*/
    while(p->next!=NULL)
   {
    p=p->next;
    fprintf(fp,"│%-6.6s │%-10.1s│%-10.1s│%.2f   │\n",p->isbn,p->bookname,p->author,p->price);
   }
    fprintf(fp,"└───────┴───────┴───────┴───────┘\n");
    fclose(fp);
    printf("     已将图书保存到data.csv 文件\n");
 }
 /*插入*/
void insert(struct books_list*head)
 {
  /*定义结构体指针变量s指向开辟的新节点首地址p为中间变量*/
  struct books_list*s,*p;
  char flag='Y';/*定义flag,方便用户选择重复输入*/
  p=head;
  /*遍历到尾节点，p指向尾节点*/
  while(p->next!=NULL)
      {
       p=p->next;
      }
   /*开辟新空间，存入数据，添加进链表*/
   while(flag=='Y'||flag=='y')
    {
     s=(struct books_list*)malloc(sizeof(struct books_list));
     printf("\n        请输入书号:");
     fflush(stdin);
     scanf("%s",s->isbn);
     printf("\n        请输入书名:");
     fflush(stdin);
     scanf("%s",s->bookname);
     printf("\n        请输入图书作者名:");
     fflush(stdin);
     scanf("%s",s->author);
     printf("\n       请输入图书价格:");
     fflush(stdin);
     scanf("%f",&s->price);
     printf("\n");
     p->next=s;/*将新增加的节点添加进列表*/ 
          p=s;/*p指向尾节点，向后移*/
     s->next=NULL;
     printf("     ------添加成功！------");
     printf("\n           继续添加？(Y/N):");
     fflush(stdin);
     scanf("%c",&flag);
     printf("\n");
     if(flag=='N'||flag=='n')
     {break;}
     else if(flag=='Y'||flag=='y')
     {continue;}
    }       
     save(head);/*保存数据至文件*/
     return;
    }
  /*查询操作*/
  void search(struct books_list *head)
  {
   struct books_list *p;
   char  temp[10000];
   p=head;
   if(head==NULL||head->next==NULL)/*判断数据库是否为空*/
   {
     printf("      ------图书库为空!------\n");
   }
    else
   {
    printf("请输入您要查找的书名:");
    fflush(stdin);
    scanf("%s",temp);
    /*指针从头节点开始移动，遍历至尾节点，查找书目信息*/
    while(p->next!=NULL)
    {
     p=p->next;
     if(strcmp(p->bookname,temp)==0)
    {
      printf("\n图书已找到!\n");
      printf("\n");
      printf("书号:%s\t\n",p->isbn);
      printf("书名:%s\t\n",p->bookname);
      printf("作者名:%s\t\n",p->author);
      printf("价格:%.2f\t\n",p->price);
     }
     if(p->next==NULL)
      {
        printf("\n查询完毕!\n");
      }
     }
    }
     return;
   }
 /*删除操作*/ 
   void delete(struct books_list*head)
   {
    struct  books_list*s,*p;   /*s为中间变量，p为遍历时使用的指针*/
    char temp[10000];
    int panduan;  /*此变量用于判断是否找到了书目*/
    panduan=0;
    p=s=head;
    printf("      [请输入您要删除的书名]:");
    scanf("%s",temp);
    /*遍历到尾节点*/ 
    while(p!=NULL)
     {
      if(strcmp(p->bookname,temp)==0)
      {
        panduan++;
        break;
      }
       p=p->next;
      }
      if(panduan==1)
      {
       for(;s->next!=p;)  /*找到所需删除卡号节点的上一个节点*/
       {
         s=s->next;
        }
       s->next=p->next;  /*将后一节点地址赋值给前一节点的指针域*/
       free(p);
       printf("\n           ------删除成功!------\n");
       }
       else /*未找到相应书目*/
       {
        printf("          您输入的书目不存在，请确认后输入!\n");
       }
       return;
       }
     /*修改操作*/
     void change(struct books_list*head)
     {
       struct books_list*p;
       int panduan=0;/*此变量用于判断是否找到书目*/
       char temp[10000];
       p=head;
       printf("请输入要修改的书名:");
       scanf("%s",temp);
       while(p->next!=NULL)
         {
          p=p->next;
          if(strcmp(p->bookname,temp)==0)
      {
        printf("\n        请输入书号:");
     fflush(stdin);
     scanf("%s",p->isbn);
     printf("\n        请输入书名:");
     fflush(stdin);
     scanf("%s",p->bookname);
     printf("\n        请输入图书作者名:");
     fflush(stdin);
     scanf("%s",p->author);
     printf("\n       请输入图书价格:");
     fflush(stdin);
     scanf("%f",&p->price);
     printf("\n");
     panduan=1;
      }
            }
      if(panduan==0)
     {
         printf("\n       ------没有图书记录!------\n\n");
     }
     return;
     }
    int main(void)
    {
      struct books_list*head;
             char choice;
      head=NULL;
      for(;;) /*实现反复输入选择*/
     {
      printf("   ┌───┐ ──────────────────────── ┌───┐\n");
      printf("   │   │  socat 图书管理信息系统  │   │\n");
      printf("   │   └──────────────────────────┘   │\n");
      printf("   │     ●【1】图书信息录入           │\n");
      printf("   │     ●【2】图书信息查询           │\n");
      printf("   │     ●【3】图书信息删除           │\n");
      printf("   │     ●【4】图书信息修改           │\n");
      printf("   │     ●【5】退出系统               │\n");
      printf("   └──────────────────────────────────┘\n");
      printf("            请选择:");
      fflush(stdin);
      scanf("%c",&choice);
      if(choice=='1')
       {
        if(head==NULL)
        {    
          head=Create_Books_Doc();
        }
        insert(head);
       }
       else if(choice=='2')
       {
        search(head);
       }
       else if(choice=='3')
       {
        delete(head);
       }
       else if(choice=='4')
       {
        change(head);
       }
       else if(choice=='5')
       {
       printf("\n");
       printf("      ------ 感谢使用图书管理信息系统------\n");
       break;
       }
       else
       {
        printf("    ------输入错误，请重新输入!------");
        break;
       }
      }
       return 0;
  }
