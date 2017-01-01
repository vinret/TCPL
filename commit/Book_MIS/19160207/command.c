#include<stdio.h>
#include"command.h"
int check()
{
		int name,pass;
		printf("请输入用户名及密码: ");
		scanf("%d %d",&name,&pass);
		if((name==191602)&&(pass==191602))
				return 1;
		else
				return 0;
}
void meau()
{
		printf("欢迎使用图书装逼管理系统！\n");
		printf(" 1 -　添加\t2 -　输出\t3 -　查询\t4 -　删除\t5 -　修改\t6 -　保存\t7 -　读取\t0 -　退出\n");
		printf("请选择功能: ");
}
