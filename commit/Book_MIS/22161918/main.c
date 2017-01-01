#include <stdio.h>
#include <stdlib.h>
#include "command.h"
#include "book.h"

int error();
int main()
{
int option,ISBN,a,cmd;
mybook * head;
mybook * p;
head=creatload();
printf("请输入密码：");
scanf("%d",&cmd);
if(cmd==1234)
{
do{

menu();
scanf("%d",&option);
if(option==5)
{a=save(head);
if(a==-1) error();
else printf("希望下次能为您服务\n");
deletelist(head);
break;}
else
{
switch(option)
{
case 1 :printf("请输入所需书号：");
        scanf("%d",&ISBN);
        p=search(head,ISBN);
        oneput(p);
        break;
case 2 :printf("请选择所删除的书号:");
        scanf("%d",&ISBN);
        del(head,ISBN);
        allput(head);
        break;
case 3 :printf("请输入所需修改的书号:");
        scanf("%d",&ISBN);
        p=update(head,ISBN);
        oneput(p);//检查修改后的结果
        break;
case 4 :printf("请输入新的书号:");
        printf("(添加后需要重启系统！)\n");
        scanf("%d",&ISBN);
        p=add(head,ISBN);
        oneput(p);//检查添加情况
        break;
default :error() ;
}
}
}
while(1);}
else printf("若开权限，请交纳1000元费用！！");
return 0;
}
int error()
{
printf("系统出错，请缴费！");
return -1;
}

