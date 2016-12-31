#include<stdio.h>
#include<stdlib.h>
#include"book.h"
int main()
{
    int i;
    char choice,ISBN[20];
    Book_list head,p,newp;
    while(1)
    {
        scanf("%c",&choice);
        if('q'==choice)
           break;
        switch(choice)
        {
           case 'c':head=create();break;
           case 'i':newp=(Book_list)malloc(sizeof(Book_list));
                    printf("Please input the name,the writer,ISBN and the price of the book:\n");
                    scanf("%s%s%s%f",newp->name,newp->writer,newp->ISBN,&newp->price);
                    insert(head,newp);break;
           case 'f':printf("Please input ISBN of the book:\n");
                    scanf("%s",ISBN);
                    p=find(head,ISBN);
                    if(p!=NULL)
                       printf("%s\t%s\t%s\t%f\n",p->name,p->writer,p->ISBN,p->price);
                    else
                       printf("The book is not here.\n");break;
           case 'd':printf("Please input ISBN of the book:\n");
                    scanf("%s",ISBN);
                    delete(head,ISBN);break;
           case 'm':printf("Please input ISBN of the book:\n");
                    scanf("%s",ISBN);
                    modify(head,ISBN);break;
           case 'o':printf("The list of book is:\n");
                    output(head);break;
           case 's':printf("Save the file.\n");
                    i=save(head,".csv file format");
                    if(i)
                       printf("cannot save the file.\n");
                    else
                       printf("Save the file.\n");break;
        }
    }
    deletelist(head);
    return 0;
}

