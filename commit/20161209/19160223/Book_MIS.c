#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
typedef int BOOL;

typedef struct bookinfo
{
	char name[30];/*书名*/
	char author[30];/*作者*/
	char ISBN[100];/*ISBN*/
	float price;/*单价*/
}BOOKINFO;
void menu()
{
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t图书管理系统\n");
	printf("\t\t\t1:添加图书记录\n");
	printf("\t\t\t2:查询图书记录\n");
	printf("\t\t\t3:删除图书记录\n");
	printf("\t\t\t4:修改图书记录\n");
	printf("\t\t\t5:保存退出\n");
}

void add()/*11111111111*/
{
	char choice;
	FILE *p;
	BOOKINFO newbook;
	system("cls");
	while(1)
	{
      printf("输入图书名称:");
	 gets(newbook.name);
	 printf("输入图书的作者:");
	 gets(newbook.author);
	 printf("输入ISBN编号:");
	 gets(newbook.ISBN);
	 printf("输入图书单价:");
	 scanf("%f",&newbook.price);
	 while(getchar()!='\n');
	 printf("是否保存该条书目?(Y/N)\n");
	 choice=getch();
	 while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
		 choice=getch();
	 if(choice=='Y'||choice=='y')
	 {
		 p=fopen("c:\\bookinfo.data","ab");
		 fwrite(&newbook,sizeof(BOOKINFO),1,p);
		 fclose(p);
		 printf("\n该条书目已添加到c:\\bookinfo.data文件中!\n");
	 }
	 else
	 {
		 printf("\n本条书目未保存!\n");
	 }
	 printf("\n是否继续添加书目?(Y/N)\n");
	 choice=getch();
	 while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
		 choice=getch();
	 if(choice=='Y'||choice=='y')
		 continue;
	 else
		 break;
	}
}

void search()
{
	char search[30]="";/*search用来存放要查询的书名*/
	int n;
	FILE *p;
	char choice;
	BOOKINFO bookinfo[100];
	int booknumber=0;
	system("cls");
	p=fopen("c:\\bookinfo.data","rb");
	while(!feof(p))
	{
		fread(&bookinfo[booknumber],sizeof(BOOKINFO),1,p);
		booknumber++;
	}
	booknumber--;/*使用feof()函数会多读一行，因此需要booknumber自减一次，使书目的数量正确*/
	fclose(p);
	while(1)
	{
		printf("输入要查询的书本名称:");
		gets(search);
		if(booknumber==0)
		{
			printf("书库中没有任何信息!\n\n");
			printf("按任意键回到主菜单!\n\n");
			getch();
			break;
		}/*if结束*/
		else
		{
			for(n=0;n<booknumber;n++)
				if(strcmp(bookinfo[n].name,search)==0)
				{
					printf("该书的详细信息如下:\n");
					printf("                   图书信息                \n");
					printf("书名        作者   ISBN编号      单价    \n");
					printf("%-12s%-8s%-6s%-8.1f\n",bookinfo[n].name,bookinfo[n].author,bookinfo[n].ISBN,bookinfo[n].price);
					break;
				}
				if(n>=booknumber)
					printf("没有查找该书的任何信息!\n");
				printf("\n\n是否继续查询?(Y/N)\n");
				choice=getch();
				while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
					choice=getch();
				if(choice=='Y'||choice=='y')
					continue;
				else
					break;
		}/*else结束*/
	}/*while(1)结束*/
}

void Delete()
{
	char search[20]="";/*search用来存放要删除的书名*/
	int n,i;
	FILE *p;
	char choice;
	BOOKINFO bookinfo[100];
	int booknumber;
	system("cls");
	while(1)
	{
		printf("输入要删除的书本名称:");
		gets(search);
		p=fopen("c:\\bookinfo.data","rb");
		booknumber=0;
		while(!feof(p))
		{
			fread(&bookinfo[booknumber],sizeof(BOOKINFO),1,p);
			booknumber++;
		}
		booknumber--;/*使用feof()函数会多读一行，因此需要booknumber自减一次，使书目的数量正确*/
		fclose(p);
		if(booknumber==0)
		{
			printf("书库中没有任何信息!\n\n");
			printf("按任意键回到主菜单!\n\n");
			getch();
			break;
		}/*if结束*/
		else
		{
			for(n=0;n<booknumber;n++)
				if(strcmp(bookinfo[n].name,search)==0)
				{
					break;
				}
				if(n>=booknumber)
					printf("没有查找该书的任何信息!\n");
				else
				{
					printf("是否确认需要删除该条书目?(Y/N)");
					choice=getch();
					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
						choice=getch();
					if(choice=='Y'||choice=='y')
					{
						for(i=n;i<booknumber-1;i++)
							bookinfo[i]=bookinfo[i+1];
						booknumber--;
						p=fopen("c:\\bookinfo.data","wb");
						for(n=0;n<booknumber;n++)
							fwrite(&bookinfo[n],sizeof(BOOKINFO),1,p);fclose(p);
						printf("删除成功!\n");
					}
					else
						printf("\n\n该条书目没有被删除!");
				}
				printf("\n\n是否继续进行删除操作?(Y/N)\n");
				choice=getch();
				while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
					choice=getch();
				if(choice=='Y'||choice=='y')
					continue;
				else
					break;
		}/*else结束*/
	}/*while(1)结束*/
}

void update()//修改
{
	char search[20]="";/*search用来存放要修改的书名*/
	int n,i;
	FILE *p;
	BOOKINFO newbook;
	char choice;
	BOOKINFO bookinfo[100];
	int booknumber;
	system("cls");
	while(1)
	{
		printf("输入要修改的书本名称:");
		gets(search);
		p=fopen("c:\\bookinfo.data","rb");
		booknumber=0;
		while(!feof(p))
		{
			fread(&bookinfo[booknumber],sizeof(BOOKINFO),1,p);
			booknumber++;
		}
		booknumber--;/*使用feof()函数会多读一行，因此需要booknumber自减一次，使书目的数量正确*/
		fclose(p);
		if(booknumber==0)
		{
			printf("书库中没有任何信息!\n\n");
			printf("按任意键回到主菜单!\n\n");
			getch();
			break;
		}/*if结束*/
		else
		{
			for(n=0;n<booknumber;n++)
				if(strcmp(bookinfo[n].name,search)==0)
				{
					break;
				}
				if(n>=booknumber)
					printf("没有查找该书的任何信息!\n");
				else
				{
					printf("输入新的图书名称:");
					gets(newbook.name);
					printf("输入新的图书的作者:");
					gets(newbook.author);
					printf("输入新的ISBN编号:");
					gets(newbook.ISBN);
					printf("输入新的图书单价:");
					scanf("%f",&newbook.price);
					while(getchar()!='\n');
					printf("是否保存该条书目?(Y/N)\n");
					choice=getch();
					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
					choice=getch();
					if(choice=='Y'||choice=='y')
					{
						p=fopen("c:\\bookinfo.data","ab");
						fwrite(&newbook,sizeof(BOOKINFO),1,p);
						fclose(p);
						printf("\n该条书目已修改到c:\\bookinfo.data文件中!\n");
					}
					printf("\n\n是否继续进行修改操作?(Y/N)\n");
				choice=getch();
				while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
					choice=getch();
				if(choice=='Y'||choice=='y')
					continue;
				else
					break;
				}
		}
	}
}

void main()
{
	char choice;
	clock_t tm;
	FILE *p;
	if((p=fopen("c:\\bookinfo.data","rb"))==NULL)
	{
		p=fopen("c:\\bookinfo.data","wb");
		fclose(p);
	}
	while(1)
	{
		system("cls");
		menu();
		choice=getch();
		switch(choice)
		{
		case '1':add();break;/*添加图书记录*/
		case '2':search();break;/*查询图书记录*/
		case '3':Delete();break;/*根据图书名称显示图书的信息*/
		case '4':update();break;/*删除图书记录*/
		case '5':printf("\n\n\t\t\t谢谢使用,再见!\n\t\t\t按任意键退出!\n");getch();return;
		default:
			printf("\n\n\t\t\t请输入菜单中的数字!(1~5)");
			tm=clock();
			while(clock()<tm+1800);
			break;
		}
	}
}
