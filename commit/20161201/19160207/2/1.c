//汉诺塔游戏
#include<stdio.h>
void Move(char source,char target);
void Hanoi(int n,char source,char help,char target);
int main()
{
		Hanoi(3,'A','B','C');
		return 0;
}

void Move(char source,char target)
{
		printf("%c->%c\n",source,target);
}

void Hanoi(int n,char source,char help,char target)
{
		if(1==n)  Move(source,target);
		else 
		{
			Hanoi(n-1,source,target,help); // 倒序再倒序，完成将Ａ中n-1个盘子移动到B中
			Move(source,target);   //移动最大盘至Ｃ中
			return Hanoi(n-1,help,source,target);  //减小规模
		}
}
