#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 100
#define PF printf
#define SF scanf
struct books
    {
        int booknum;        //书号
        char bookname[20];  //书名
        char authorname[20];//作者
        char cbs[20];       //出版社
        int  price;         //价格   
   
    };struct books book[N];
   
int luru(struct books * p_book,int i)//录入函数    p_book=book;i=n;
{   
    system("cls");//清屏
   
    while(1)
    {   char ch;
        PF("~~~~~~~~~~~~~~~开始输入信息~~~~~~~~~~~~~\n");
        PF("请输入书的编号:");
        SF("%d",&p_book->booknum);PF("\n");//book[i].booknum
        PF("请输入出版社:");
        SF("%s",p_book->cbs);PF("\n");//
        PF("请输入图书价格:");
        SF("%d",&p_book->price);PF("\n");
        PF("请输入书名:");
        SF("%s",p_book->bookname);PF("\n");
        getchar( );//屏蔽回车
        PF("请输作者名:");
        gets(p_book->authorname);
        ++i;
        PF("是否继续输入,请选择(y/n):");
        SF("%c",&ch);
            if(ch=='n')break;
            else p_book++;
   
        

        
    }
        return i;        
}



void paixu(struct books book[],int i)//按书号进行排序  
{   
    int n,a,temp;
    char t1[20],t2[20],t3[20];
    for(n=0;n<i-1;n++)//趟数
    for(a=0;a<i-1-n;a++)//每趟的次数
        if(book[a].booknum>book[a+1].booknum)//整型的比较
        {   
            {temp=book[a].booknum;book[a].booknum=book[a+1].booknum;book[a+1].booknum=temp;}//书号换位
            {strcpy(t1,book[a].bookname);strcpy(book[a].bookname,book[a+1].bookname);strcpy(book[a+1].bookname,t1);}//书名换位
            {strcpy(t2,book[a].cbs);strcpy(book[a].cbs,book[a+1].cbs);strcpy(book[a+1].cbs,t2);}//出版社换位
            {temp=book[a].price;book[a].price=book[a+1].price;book[a+1].price=temp;}//价格换位
            {strcpy(t3,book[a].authorname);strcpy(book[a].authorname,book[a+1].authorname);strcpy(book[a+1].authorname,t3);}//书作者换位
        }
        system("cls");
            PF("书号\t书名\t出版社\t价格\t作者\n");
        for(a=0;a<i;a++)
            PF("%d\t%s\t%s\t%d\t%s\n",book[a].booknum,book[a].bookname,book[a].cbs,book[a].price,book[a].authorname);

}

void cx1(struct books book[],int i)//书名查询
{
    int a;
    char name[20];
        system("cls");
        PF("|按书名查询|\n");
        SF("%s",&name);
        for(a=0;a<i;a++)
        if(strcmp(name,book[a].bookname)==0)
        {
        PF("书号\t书名\t出版社\t价格\t作者\n");
        PF("%d\t%d\t%d\t%.2f\t%s\n",book[a].booknum,book[a].bookname,book[a].cbs,book[a].price,book[a].authorname);
        }
        else PF("没有你要的查询结果\n");
}
void cx2(struct books book[],int i)//作者名查询
{
    int a;char g[20];
        system("cls");
        PF("|按作者名查询|\n");
            scanf("%s",&g);
        for(a=0;a<i;a++)
            if(strcmp(g,book[a].authorname)==0)
            {
                PF("书号\t书名\t出版社\t价格\t作者\n");
                PF("%d\t%d\t%d\t%.2f\t%s\n",book[a].booknum,book[a].bookname,book[a].cbs,book[a].price,book[a].authorname);
            }
        else PF("没有你要的查询结果\n");
}

void chaxun(struct books shu[],int i)//查询
{   
    int x;
    system("cls");
    PF("~~~~~~~~~~~~~~~~图书信息查询~~~~~~~~~~~~~~~\n");
    PF("********请选择查询方式********\n");
    PF("|1.按书名查询|\n");
    PF("|2.按作者名查询|\n");
    PF("请输入你选择___");
    SF("%d",&x);
    switch(x)
    {
    case 1:cx1(book,i);break;//调用cx1函数完成按书名查询
    case 2:cx2(book,i);break;//调用cx2函数完成按作者查询

    default :PF("输入有误,请重新输入!\n");break;
    }

   
}
/*int fl(struct books shu[],int i)//按书号删除
{   
    int y,h,m;int j;
    fanhui:PF("请你输入想要删除图书的书号\n");
    scanf("%d",&y);//接收书号
        if(y>=i)
        {
            PF("您要删除的图书信息不存在\n");return 0;
        }
        else
        {
            y=y-1;
            
        PF("书号\t书名\t出版社\t价格\t作者\n");
        PF("%d\t%d\t%d\t%.2f\t%s\n",shu[y-1].booknum,shu[y-1].bookname,shu[y-1].cbs,shu[y-1].price,shu[y-1].authorname);
        PF("你确定要删除以上信息吗？\n");
        PF("|1.是,确认删除\n");
        PF("|2.否,返回上一层\n");
        PF("|3.返回主菜单\n");
        SF("%d",&h);
        switch(h)
        {
        case 1:
               
            for(m=0;m<i;m++)
               {
                    if(y==shu[m].booknum&&y<i-1)
                    {

                        shu[m].booknum=shu[m+1].booknum;
                        for(j=m;j<i-1;j++)
                        {
                            shu[j].booknum=shu[j+1].booknum;
                            shu[j].bookname=shu[j+1].bookname;
                            shu[j].cbs=shu[j+1].cbs;
                            strcpy(shu[j].price,shu[j+1].price);
                            strcpy(shu[j].authorname,shu[j+1].authorname);
                        }
                        i--;
                    }
                    if(y==shu[m].booknum&&m==i-1)
                        i--;
               }
            PF("i=%d",i);break;
            
        case 2: system("cls");
            goto fanhui;break;// 返回
        case 3:system("cls");break;
        default :PF("输入有误,请重新输入!\n");break;
            
        }
        }
        return i;
}*/
int sm(struct books shu[],int i)//按书名删除
{
    char book[20];int a,h,m;
    fanhui:printf("请你输入想要删除图书的名称\n");
    SF("%s",book);//接收书名
    for(a=0;a<i;a++)
        if(strcmp(book,shu[a].bookname)==0)
        {
            PF("书号\t书名\t出版社\t价格\t作者\n");
            PF("%d\t%d\t%d\t%.2f\t%s\n",shu[a].booknum,shu[a].bookname,shu[a].cbs,shu[a].price,shu[a].authorname);
            PF("你确定要删除以上信息吗？\n");
            PF("|1.是,确认删除\n");
            PF("|2.否,返回上一层\n");
            PF("|3.返回主菜单\n");
            SF("%d",&h);
            SF("%d",&h);
            switch(h)
            {
            case 1:for(m=0;m<i;m++)
                    {
                    if(a==m&&a<i-1)
                    {
                        m=m+1;
                    }
                    if(a==m&&m==i-1)
                        i--;
                   }
            return --i;break;
        case 2:system("cls");
            goto fanhui;break;//返回
        case 3:system("cls");break;
        default :PF("输入有误,请重新输入!\n");break;
               
            }
        }
        if(strcmp(book,shu[a].bookname)!=0) printf("您要删除的图书信息不存在\n");
        return i;
}
int del(struct books shu[],int i)//删除信息
{
    int h;
    system("cls");
    PF("~~~~~~~~~~~~~~~~图书信息删除~~~~~~~~~~~~~~~\n");
    PF("|1.图书的书号|\n");
    PF("|2.图书的书名|\n");
    SF("%d",&h);
    switch(h)
    {
    //case 1:    system("cls");i=fl(shu,i);break;//按书号删除
    case 2:    system("cls");i=sm(shu,i);break;//按书名删除
    default :PF("输入有误,请重新输入!\n");break;
    }
    return i;
}
int charu(struct books shu[],int i)//插入信息
{
    system("cls");
        PF("~~~~~~~~~~~~~~~开始插入信息~~~~~~~~~~~~~\n");
        PF("请输书号\n");
        SF("%d",&shu[i].booknum);
        PF("请输入书名\n");
        SF("%d",&shu[i].bookname);
        PF("请输入价格\n");
        SF("%f",&shu[i].price);
        PF("请输入出版社\n");
        SF("%s",&shu[i].cbs);
        getchar( );//屏蔽回车
        PF("请输作者名\n");
        gets(shu[i].authorname);
        i++;
        system("cls");
        PF("插入信息成功\n");
        return i;        

}
void main()
{
    int choice,n=0;
    for( ; ; )
    {   
        system("cls");
        {
        PF("\t\t*****************图书信息管理系统*****************\n");
        PF("\t\t*\t\t|1.图书信息录入                  *\n");
        PF("\t\t*\t\t|2.图书信息浏览                  *\n");
        PF("\t\t*\t\t|3.图书信息查询                  *\n");
        PF("\t\t*\t\t|4.图书信息的删除                *\n");
        PF("\t\t*\t\t|5.图书信息的插入                *\n");
        PF("\t\t*\t\t|6.退出系统                      *\n");
        PF("\t\t*****************图书信息管理系统*****************\n\n\n");
        PF("\t\t请输入以上序号进行选择:\n");
        SF("%d",&choice);
        }
    switch(choice)
    {
    case 1:n=luru(book,n);//录入  book[0]
        system("pause");break;
    case 2:paixu(book,n);//liulan(book,n);//浏览
        system("pause");break;
    case 3:chaxun(book,n);//查询
        system("pause");break;
    case 4:n=del(book,n);
        system("pause");break;
    case 5:n=charu(book,n);
        system("pause");break;
    case 6:exit(0);
        system("pause");
    default :PF("输入有误,请重新输入!\n");
        system("pause");break;
    }
}
} 
