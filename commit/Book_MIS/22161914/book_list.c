#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct books
{
       char ISBN[20];        
       char bookname[20];       
       char author[20];     
       char cbs[20];            
       char price[5];            
       struct books *next; 
       struct books *prior;  
};

struct books *head;       //头结点
struct books *last;       //尾结点 

int menu(void);    //菜单选项 
void inputs(char *prompt,char *s,int count);          //输入格式 
void enter(void);                                     //信息输入 
void dls_store(struct books *i,struct books **head,struct books **last);//按书号大小建立链表 
struct books *find(char *bn);                      //按书名检索 
void search(void);                                 //按书名查找 
void modify(void);                                 //修改信息 
void display(struct books *p);                       //显示格式 
void list(void);
void del(struct books **head,struct books **last);           //删除信息 
void save(void);             //以文件形式保存信息 
void load(void);              //从文件中载入信息 


void inputs(char *prompt,char *s,int count)
{
     char p[255];
     do{
          printf(prompt);
          gets(p);
          if(strlen(p) > count)  //限定输入字符长度 
          {
                printf("\nToo long\n");
          }
     }while(strlen(p) > count);      
     strcpy(s,p);
} 

void enter(void)       
{
    system("cls");
    char ch;
    struct books *p;
    while(1)
    {                
          p=(struct books *)malloc(sizeof(struct books));
          char ch;         
          inputs("请输入书的编号:",p->ISBN,20);
          inputs("请输入书名:",p->ISBN,20);
          inputs("请输作者名:",p->author,20);
          inputs("请输入出版社:",p->cbs,20);
          inputs("请输入图书价格:",p->price,5);
          printf("\n");
          dls_store(p,&head,&last);
          printf("是否继续输入(Y/N):");
          ch = getchar();
          if(ch == 'N') break;
          fflush(stdin);
    }
}
                  
void dls_store(struct books *i,struct books **head,struct books **last)   //按书号顺序插入表中 
{
     struct books *p,*old;
     if((*last) == NULL)
     {
          i->prior = NULL;
          i->next = NULL;
          (*head) = i;
          (*last) = i;
          return;
     }
     p = (struct books *)malloc(sizeof(struct books)); 
     p = (*head);
     old = NULL;
     while(p!=NULL)
     {
           if(strcmp(p->ISBN,i->ISBN) < 0)    
           {
                  old = p;
                  p = p->next;
           }
           else
           {
                  if(p->prior)
                  {
                       p->prior->next = i;
                       i->next = p;
                       i->prior = p->prior;
                       p->prior = i; 
                       return;
                  }
                  i->next = p;        
                  i->prior = NULL;
                  p->prior = i;
                  *head = i;
                  return;
           }
     }//end while
     old->next = i;
     i->next = NULL;
     i->prior = old;
     *last = i;
}
           
struct books *find(char *bn)
{
    struct books *p;
    p = head;
    
    while(p!=NULL)
    {
          if(strcmp(bn,p->bookname) == 0)
          {
                return p;
          }
          p = p->next;
    }
    return NULL; 
}

void search(void)
{
     char name[20];
     struct books *p;
     printf("请输入你要查询的书名:");
     gets(name);
     p = find(name);
     if(p == NULL)  printf("没有找到你查询的信息.\n");
     else display(p);
}

void modify(void)
{
     char name[20];
     struct books *p;
     printf("请输入你要查询的书名:");
     gets(name);
     p = find(name);
     if(p == NULL)  printf("没有找到你查询的信息.\n");
     else
     {
          inputs("请输入书的编号:",p->ISBN,20);
          inputs("请输入书名:",p->bookname,20);
          inputs("请输作者名:",p->author,20);
          inputs("请输入出版社:",p->cbs,20);
          inputs("请输入图书价格:",p->price,5);
          printf("\n");
     }
}

void display(struct books *p)
{
     printf("%s\t",p->ISBN);
     printf("%s\t",p->bookname);       
     printf("%s\t",p->author);
     printf("%s\t",p->cbs);            
     printf("%s\t",p->price);
     printf("\n");
}

void list(void)
{
     system("cls");
     struct books *p;
     p = head;
     printf("书号\t书名\t作者\t出版社\t价格\n");
     while(p != NULL)
     {
             display(p);
             p = p->next;
     }
     printf("\n");
}

void del(struct books **head,struct books **last)
{
     struct books *i;
     
     char s[50];
     inputs("输入书名:",s,20);
     i = find(s);
     if(i)
     {
          if(*head == i)
          {
                *head = i->next;
                if(*head) (*head)->prior = NULL;
                else *last = NULL;
          }
          else
          {
                 i->prior->next = i->next;
                 if(i != *last)
                 {
                      i->next->prior = i->prior;
                 }
                 else
                 {
                     *last = i->prior;
                 }
          }
          free(i);
     }//end  if(i)
}

void save(void)
{
     struct books *p;
     FILE *fp;
     if((fp=fopen("books","wb")) == NULL)
     {
            printf("open file error.\n");
            exit(1);
     }               
     p = head;
     while(p!=NULL)
     {
            fwrite(p,sizeof(struct books),1,fp);
            p = p->next;
     }
     fclose(fp);
}

void load(void)
{
     struct books *p;
     FILE *fp;
     fp=fopen("books","rb");
     if(fp == NULL)
     {
           printf("open file error.\n");
           exit(1);
     }
     while(head)
     {
           p = head->next;
           free(p);
           head = p;
     }
     head = last = NULL;
     printf("\n 载入信息 \n");
     while(!feof(fp))
     {      
            p = (struct books *)malloc(sizeof(struct books));
            if(1 != fread(p,sizeof(struct books),1,fp)) break;
            dls_store(p,&head,&last);
     }
     fclose(fp);
}
                    
int menu(void)
{
    char s[20];
    int c;
    system("cls");
    printf("\t\t*****************图书信息管理系统*****************\n");
    printf("\t\t*\t\t|1.图书信息输入                   *\n");
    printf("\t\t*\t\t|2.图书信息浏览                   *\n");
    printf("\t\t*\t\t|3.图书信息查询                   *\n");
    printf("\t\t*\t\t|4.图书信息修改                   *\n");
    printf("\t\t*\t\t|5.图书信息删除                   *\n");
    printf("\t\t*\t\t|6.存储图书信息                   *\n");
    printf("\t\t*\t\t|7.载入图书信息                   *\n");
    printf("\t\t*\t\t|8.退出系统                       *\n");
    printf("\t\t*****************图书信息管理系统*****************\n\n\n");
    printf("\t\t请输入以上序号进行选择:\n");
    do{
          gets(s);
          c = atoi(s);
    }while(c<0||c>8);
    return c;
}

int main(void)
{
    head = last = NULL;
    while(1)
    {
        switch(menu())
        {
            case 1:enter();system("pause");  
                   break;
            case 2:list();system("pause");
                   break;
            case 3:search();system("pause");
                   break;
            case 4:modify();system("pause");
                   break;
            case 5:del(&head,&last);system("pause");
                   break;
            case 6:save();system("pause");
                   break;
            case 7:load();system("pause");
                   break;
            case 8:exit(0);
        }//end switch
    }//end while
    return 0;
}
