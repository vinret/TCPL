#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"book.h"
#include"book.c"
int main(){
	printf("Manual:\n");
	printf("The output file will be entitled by num1(num2).csv.\n");
	printf("Num1 ranging from 1 to 3 means findfile,sortfile and recordfile separately.\n");
	printf("Num2 means the order of the file.\n\n");
	memset(num,0,sizeof(int)*4);
	int query;
	menu();
	scanf("%d",&query);
	while (query){
		data x;
		int pos,l,r,order;
		switch(query){
			case 1:scanf("%s%s%s%lf",&x.name,&x.auther,&x.isbn,&x.price);
			      insert(x,++tot);
			      record();
			      break;
			case 2:scanf("%d",&pos);
			      openfile(1);
			      print(find(pos));
			      fclose(fp);
			      break;
			case 3:scanf("%d",&pos);
			      del(pos);
			      --tot;
			      record();
				  break;
			case 4:scanf("%d%s%s%s%lf",&pos,&x.name,&x.auther,&x.isbn,&x.price);
			      change(x,pos);
			      record();
			      break;
			case 5:scanf("%d%d%d",&l,&r,&order);
			      sort(l,r,order);
			      break;
		}
		menu();
	   scanf("%d",&query);
	}
	if (root) destroy(root);
	return 0;
}

