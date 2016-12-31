#include<stdio.h>
#include<stdlib.h>
#include "book.h"
#include "command.h"

int main()
{
    struct Book *head=Book_list;
    Output(head);

    char fileName[]="books.csv";
    menu();
    return 0;
}
/*输出*/
void Output(struct Book *head)
{
     struct Book *p;
     p=head;
     while(p!=NULL)
     {
        printf("%30s\t%20s\t%s\t%6f\n",p->name,p->writer,p->ISBN,p->price);
        p=p->next;
     }
}

