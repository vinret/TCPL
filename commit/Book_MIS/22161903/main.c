#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"book.h"
#include"command.h"
void main()
{
  Book studAry[1000];
   int cmd;     //命令
   int size=2;
   char qISBN[5];
   Book * p;
   p=studAry;
   
    FILE *fp;
    fp=fopen("book.csv","r");
    if (fp==NULL) return -1;
	while(!feof(fp)){
		fscanf(fp,"%s%s%s%f",p->name,p->author,p->ISBN,&p->prize);
	p++;
	}
	fclose(fp);

   do
{
    menu();
  scanf("%d",&cmd); //读取命令
  if(cmd==5){
     saveAs(studAry,size);
     break;
    } 
   switch(cmd)
   {
    case 1:
      printf("请输入查询的书本编号：");
      scanf("%s",qISBN);
      if(search(studAry,size,qISBN) == NULL) printf("该书本不存在！\n");
      else {
        search(studAry,size,qISBN);
        printf("%s\t%s\t%s\t%f\n",studAry->name,studAry->author,studAry->ISBN,studAry->prize);
         }
      break;
    case 2:
       printf("请输入新书本的信息：\n");
       insert(studAry,size);

       break;
    case 3:
       printf("输入被修改的书本编号：");
       scanf("%s",qISBN);
       printf("修改书本信息：\n");
       update(studAry,size,qISBN);
       break;
    case 4:
       printf("被删除的书本编号：");
       scanf("%s",qISBN);
       if(delete(studAry,&size,qISBN)==0)printf("成功删除书本记录！\n");
       else printf("此书本不存在，无法删除！！\n");
       break;
      default:errorCmd();
    }
          
}while(1);
}
