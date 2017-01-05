#ifndef _BOOK_H
#define _BOOK_H

struct BOOK
{
	char name[100];
	char author[50];
	char ISBN[50];
	float price;
	struct BOOK *next;
};

void Save(struct BOOK *head);
void Read(struct BOOK *head);
struct BOOK *Add(struct BOOK *head,struct BOOK *p);
struct BOOK *Delete(struct BOOK *head,struct BOOK *p);
struct BOOK *Search(struct BOOK *head,char n[]);
void DeleteList(struct BOOK *head);
struct BOOK *DeleteHead(struct BOOK *head);
/*struct BOOK *Modify(struct BOOK *p,struct BOOK *pnew);*/

#endif
