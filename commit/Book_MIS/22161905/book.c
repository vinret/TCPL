#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Pquantity 3
#define MAX 1000
#define N 5
int k=0;
/*结构体类型*/
typedef struct
{
    char name[20];
    char author[20];
    char press[20];
    int ISBN;
    double price;
}STUDENTS;

/*读取文件*/
int read_file(STUDENTS stu[])
{
    FILE *fp;
    int i=0;
    if((fp=fopen("stu.txt","rt"))==NULL)
    {
        printf("\n\n-----F盘中文件不存在!");
        return 0;
    }
    while(feof(fp)!=1)
    {
        fread(&stu[i],sizeof(STUDENTS),1,fp);
        if(stu[i].ISBN==0)  break;
        else  i++;
    }
    fclose(fp);
    return i;
}

/*保存文件*/
void save_file(STUDENTS stu[],int sum)
{
    FILE *fp;
    int i;
    if((fp=fopen("stu.txt","wb"))==NULL)
    {
        printf("写文件错误！\n");
        return;
    }
    for(i=0;i<sum;i++)
        if(fwrite(&stu[i],sizeof(STUDENTS),1,fp)!=1)
            printf("写文件错误!\n");
    fclose(fp);
}

/*创建图书信息*/
int input(STUDENTS stu[])
{
    int i,x;
    for(i=0;i<1000;i++)
    {
        system("cls");
        printf("\n\n       录入图书信息(最多MAX=%d本）\n",MAX);
        printf("    ------------------\n");
        printf("\n         第%d本图书",k+1);
        printf("\n请输入图书编号：");
        scanf("%d",&stu[k].ISBN);
        printf("\n请输入图书书名：");
        scanf("%s",stu[k].name);
        printf("\n请输入图书作者：");
        scanf("%s",stu[k].author);
        printf("\n请输入图书出版社：");
        scanf("%s",stu[k].press);
        printf("\n请输入图书价格：");
        scanf("%lf",&stu[k].price);
        printf("\n 请按1键返回菜单或按0键继续创建");
        scanf("%d",&x);
     if(x)  break;
     }
     return k;
}

 
/*查询图书*/
void search(STUDENTS stu[])
{
    int i;
    char name[20];
    system("cls");
    printf("  \n\n请输入您要查找的书名：");
    scanf("name=%s",name);
    for(i=0;i<k;i++)
       if(strcmp(name,stu[i].name)==0)
           printf("\n\n\n编号：%d,书名：%s,作者：%s,出版社：%s,价格：%.2f\n",stu[i].ISBN,stu[i].name,stu[i].author,stu[i].press,stu[i].price);
       printf("按任意键加回车返回主菜单！");
    scanf("%d",&i);
    getchar();
}

/*删除图书*/
void delete(STUDENTS stu[])
{
    system("cls");
    char Stuname2[20];
    int i,j;
    printf("请输入图书名：");
    scanf("%s",Stuname2);
    printf("\n");
    for(i=0;i<k;i++)
        if(strcmp(stu[i].name,Stuname2)==0)
            for(j=0;j<20;j++)
                stu[i].name[j]=stu[i+1].name[j];
            k--;
 
    printf("删除成功\n");
    printf("按任意键加回车返回主菜单！");
    scanf("%d",&i);
    getchar();
}

/*修改图书*/
void update(STUDENTS stu[])
{
    int ISBN,i,choice;
    system("cls");
    printf("\n\n\n  请输入您要修改的图书的编号:");
    scanf("%d",&ISBN);
    for(i=0;i<k;i++)
    {
        if(ISBN==stu[i].ISBN)
            printf("\n编号：%d,书名：%s,作者：%s,出版社：%s,价格：%.2f\n",stu[i].ISBN,stu[i].name,stu[i].author,stu[i].press,stu[i].price);
        printf("\n\n\n  *******请输入您想要修改的数据*******\n\n");
    printf("     1.编号\n\n");
    printf("     2.书名\n\n");
    printf("     3.作者\n\n");
    printf("     4.出版社\n\n");
    printf("     5.价格\n\n");
    printf("     请选择（1-5）：");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
             printf("\n  请输入您修改的新编号");
             scanf("%d",&stu[i].ISBN);
          break;
        }
        case 2:
        {
             printf("\n  请输入您修改的新书名");
             scanf("%s",stu[i].name);
          break;
        }
        case 3:
        {
             printf("\n  请输入您修改的新作者");
             scanf("%s",stu[i].author);
          break;
        }
        case 4:
        {
             printf("\n  请输入您修改的新出版社");
             scanf("%s",stu[i].press);
          break;
        }
        case 5:
        {
             printf("\n  请输入您修改的新价格");
             scanf("%lf",&stu[i].price);
          break;
        }
     }
  } 
  printf("\n编号：%d,书名：%s,作者：%s,出版社：%s,价格：%.2f\n",stu[i].ISBN,stu[i].name,stu[i].author,stu[i].press,stu[i].price);
  scanf("%d",&i);
}
 
/*菜单*/
void menu()
{
    STUDENTS stu[20];
    int choice,k,sum;
    sum=read_file(stu);
    if(sum==0)
    {
        printf("请先录入基本库存信息!按回车进入------\n");
        getchar();
        sum=input(stu);
    }
    do 
    {
        system("cls");
        printf("\n\n\n      ********图书信息管理系统********\n\n");
        printf("     1.查询图书信息\n\n");
        printf("     2.删除图书信息\n\n");
        printf("     3.修改图书信息\n\n");
        printf("     0.退出系统\n\n");
        printf("     请选择（0-3）：");
        scanf("%d",&choice);
   
    switch(choice)
    {
        case 1:search(stu);break;
        case 2:delete(stu);break;
        case 3:update(stu);break;
        case 0:break;
    }
    }while(choice!=0);
    save_file(stu,sum);
}

/*主函数*/
int main()
{
    int i,sum;
    menu();
}

