#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "book.h"
#include "command.h"
int main()
{
    int choice;
    struct Book book[60];
    struct Book book1;
    struct Book *pbook;
    pbook=book;
    int n=load(pbook),k,isbn;
  
    while(1)
    {
          choice=menu();
          if(choice==0) break;
          switch(choice)
      {
       case 1:{output(book,n);break;}
       case 2:{
              save(pbook,n);
              printf("Have been saved successfully!\n");
              break;
              }
       case 3:{
              printf("And you would like to search(ISBN):");
              scanf("%d",&isbn);
              if(k!=-1) printf("%s,%s,%d,%f\n",book[k].name,book[k].author,book[k].isbn,book[k].price);
              else printf("Sorry,no found.\n");
              break;
              }
       case 4:{
              printf("And you would like to add(name,author,ISBN,price):");
              scanf("%s,%s,%d,%f",book1.name,book1.author,&book1.isbn,&book1.price);
              n=insert(book,n,book1);
              break;
              }
       case 5:{
              printf("And you would like to delete(ISBN):");
              scanf("%d",&isbn);
              n=delete(book,n,isbn);
              printf("Have been deleted successfully!\n");
              break;   
              }                 
       case 6:{
              printf("And you would like to revise(ISBN):");
              scanf("%d",&isbn);
              k=search(book,n,isbn);
              if(k!=-1)
              {
              printf("Please input the new information:");
              scanf("%s,%s,%d,%f\n",book[k].name,book[k].author,&book[k].isbn,&book[k].price);
              }
              else printf("Sorry,no found\n");
              break;
              }
       }
    output(book,n);
   }
   return 0; 
}
