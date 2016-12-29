#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
	char bookname[100];
	char writername[100];
	char ISBN[100];
	int price;
};
void input(struct book str[],int n);
void output(struct book str[],int n);
int search(struct book str[],int n,char ISBN[]);
int qdelete(struct book str[],int n,char ISBN[]);
int save(int n,struct book str[]);
int menu();
int main()
{
	int s;
	char ISBN[100];
	struct book str[1000];
    FILE *fp;
    fp=fopen("books.csv","r");
    char line[100];
    char info[4][50];
    int i,j=0,k=0,n=0;
                while(fgets(line,100,fp)!=NULL)
                        {
                                for(i=0;i<strlen(line);i++)
                                        if(line[i]==',')
                                        {
                                                info[j][k]='\0';
                                                ++j;
                                                k=0;
                                        }
                                        else
                                        {
                                                info[j][k]=line[i];
                                                ++k;
                                        }
                                strcpy(str[n].bookname,info[0]);
                                strcpy(str[n].writername,info[1]);
                                strcpy(str[n].ISBN,info[2]);
                                str[n].price=atof(info[3]);
                                n++;
                                j=0;
                                k=0;
                        }
        fclose(fp);
    do
	{
		menu();
		int cmd;
		cmd=getchar();
		getchar();
		if(cmd='q')
		{
			save(n,str);
			break;
		}
		switch(cmd)
		{
			case'i':
				printf("输入借的书的信息：\n");
				input(str,n);
				n=++n;
				output(str,n);
				break;
			case's':
				printf("输入要查询的书的ISBN:\n");
				fgets(ISBN,20,stdin);
				s=search(str,n,ISBN);
					if(s!=-1)
						printf("%s,%s,%s,%d\n",str[s].bookname,str[s].writername,str[s].ISBN,str[s].price);
					else
						printf("NO found!");
				break;
			case'u':
				printf("输入要删除的书的ISBN:\n)");
				fgets(ISBN,20,stdin);
				n=qdelete(str,n,ISBN);
		}
	}
	while(1);
	return 0;
}
int menu()
{
	printf("===图书管理系统===\n");
	printf("(i)添加书籍\n");
	printf("(s)查询书籍\n");
	printf("(u)删除书籍\n");
	printf("(q)退出系统\n");
	return 0; 
}
void input(struct book str[],int n)
{
	int i;
	scanf("%s，%s，%s，%d",str[n].bookname,str[n].writername,str[n].ISBN,&str[n].price);
}
void output(struct book str[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%s %s %s %d\n",str[i].bookname,str[i].writername,str[i].ISBN,str[i].price);
}
int search(struct book str[],int n,char ISBN[])
{
	int i,b;
	for(i=0;i<n;i++)
		{
			b=strcmp(str[i].ISBN,ISBN);
			if(b==0)
				return i;	
				}		
	return -1;
}
int qdelete(struct book str[],int n,char ISBN[])
{
	int i;
	int k=search(str,n,ISBN);
	if(k==-1)
		return n;
	for(i=k;i<n;i++)
		str[i]=str[i+1];
	return n-1;
}
int save(int n,struct book str[])
{
        int i;
        FILE *fp;
        fp=fopen("books.csv","w");
        for(i=0;i<n;i++)
                {
                        fprintf(fp,"%s,",str[i].bookname);
                        fprintf(fp,"%s,",str[i].writername);
                        fprintf(fp,"%s,",str[i].ISBN);
                        fprintf(fp,"%d\n",str[i].price);
                }
        fclose(fp);
        return 0;
}

