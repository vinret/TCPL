#include"book.h"
#include<stdlib.h>

void menu(){
	if (tot<2) printf("There is %d record at present.\n",tot);
	else printf("There are %d records at present.\n",tot);
	printf("insert...please read in order of:1,name,auther,isbn,price;\n");
	printf("find.....please read in order of:2,position;\n");
	printf("delete...please read in order of:3,position;\n");
	printf("change...please read in order of:4,position,name,auther,isbn,price;\n");
	printf("sort.....please read in order of:5,begin,end,order"
	       "(1,2,3 and 4 stand separately for name,auther,isbn and price);\n");
	return;
}
void openfile(int t){
	char s[100];
	itoa(t,file);
	itoa(++num[t],s);
	strcat(file,"(");
	strcat(file,s);
	strcat(file,").csv");
	fp=fopen(file,"w");
	return;
}
void print(data x){
	fprintf(fp,"%s,%s,%s,%.2lf\n",x.name,x.auther,x.isbn,x.price);
	return;
}
data find(int pos){
	book *k=root;
	while (pos>k->s && k->next){
		pos-=k->s;
		k=k->next;
	}
	return(k->a[pos]);
}
void record(){
	int i;
	openfile(3);
	for (i=1;i<=tot;++i)
	   print(find(i));
	fclose(fp);
	return;
}
void insert(data x,int pos){
	if (!root){
		root=(book*)malloc(sizeof(book));
		root->s=1;
		root->a[1]=x;
		return;
	}
	book *k=root;
	while (pos>k->s && k->next){
		pos-=k->s;
		k=k->next;
	}
	memmove(k->a+pos+1,k->a+pos,sizeof(int)*(k->s-pos+1));
	k->s++;
	k->a[pos]=x;
	if(k->s==2*m){
		book *t=(book*)malloc(sizeof(book));
		t->next=k->next;
		k->next=t;
		memcpy(t->a+1,k->a+m+1,sizeof(int)*m);
		t->s=k->s=m;
	}
	return;
}
void del(int pos){
	book *k=root;
	while (pos>k->s && k->next){
		pos-=k->s;
		k=k->next;
	}
	memmove(k->a+pos,k->a+pos+1,sizeof(int)*(k->s-pos));
	k->s--;
	return;
}
void change(data t,int pos){
	book *k=root;
	while (pos>k->s && k->next){
		pos-=k->s;
		k=k->next;
	}
	k->a[pos]=t;
	return;
}
void destroy(book *k){
	if (k->next) destroy(k->next);
	free(k);
	return;
}
int compare(data a,data b,int order){
	switch (order){
		case 1:return strcmp(a.name,b.name)<0;break;
		case 2:return strcmp(a.auther,b.auther)<0;break;
		case 3:return strcmp(a.isbn,b.isbn)<0;break;
		case 4:return a.price<b.price;break;
	}
}
void merge(int l,int r,int order){
	if (l==r) return;
	int p=l,mid=(l+r)/2,q=mid+1,i=l,j;
	merge(l,mid,order);
	merge(mid+1,r,order);
	while (p<=mid || q<=r){
		if (q>r || (p<=mid && compare(a[p],a[q],order)))
			f[i++]=a[p++];
		else f[i++]=a[q++];
	}
	for (j=l;j<=r;++j)
	    a[j]=f[j];
	return;
}
void sort(int l,int r,int order){
	int i;
	for (i=l;i<=r;++i)
	    a[i]=find(i);
	merge(l,r,order);
	openfile(2);
	for (i=l;i<=r;++i)
	    print(a[i]);
	fclose(fp);
	return;
}
void itoa(int i,char*string)
      {
      int power,j;
      j=i;
      for(power=1;j>=10;j/=10)
      power*=10;
      for(;power>0;power/=10)
       {
           *string++='0'+i/power;
           i%=power;
       }
      *string='\0';
     }
