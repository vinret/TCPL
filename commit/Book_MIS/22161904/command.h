#ifndef COMMAND_H
#define COMMAND_H

void Output(struct Book book[],int n);
int Insert(struct Book book[],int n,struct Book book_);
int Search(struct Book book[],int n,float ISBN);
void Update(struct Book book[],float ISBN);
int Delete(struct Book book[],int n,float ISBN);

#endif
