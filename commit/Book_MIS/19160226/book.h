#ifndef BOOK_H_
#define BOOK_H_
struct books
{
	char isbn[20];
	char bookname[20];
	char author[20];
	char price[5];
	struct books *next;
	struct books *prior;
};

struct books *head;
struct books *last;

void inputs(char *prompt,char *s,int count);
void enter(void);
void dls_store(struct books *i,struct books **head,struct books **last);
struct books *find(char *bn);
void search(void);
void modify(void);
void display(struct books *p);
void del(struct books **head,struct books **last);
void save(void);
void load(void);

#endif
