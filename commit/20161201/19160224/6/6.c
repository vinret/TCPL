#nclude<stdio.h>
void Move(char source,char target);
void Hanoi(int n,char source,char help,char target);

int main()
{
   Hanoi(3,'a','b','c');
   return 0;
   }

void Move(char source,char target)
{
 printf("%c->%c\n",source,target);
 }
 void Hanoi(int n,char source,char help,char target)
{
 if(n==1) Move(source,target);
 else
 {
   Hanoi(n-1,source,target,help);
   Move(source,target);
   Hanoi(n-1,help,source,target);
   }
   }include<stdio.h>
#define ROW 3
#define COL 4
int main()
{
  int matrixA[ROW][COL],matrixB[COL][ROW];
  int i,j;
  printf("输入原矩阵A中的元素,");
  printf("%d*%d:\n",ROW,COL);
  for(i=0;i<ROW;i++)
  {
  for(j=0;j<COL;j++ )
  {
    scanf("%d",&matrixA[i][j]);
	}
	}
for(i=0;i<ROW;i++)
{
 for(j=0;j<COL;j++)
 {
  matrixB[j][i]=matrixA[i][j];
  }
  }
   printf("转置矩阵B,");
   printf("%d*%d:\n",COL,ROW);
   for(i=0;i<COL;i++)
   {
    for(j=0;j<ROW;j++)
	{
	printf("%8d",matrixB[i][j]);
	}
	printf("\n");
	}
	return 0;
	}
