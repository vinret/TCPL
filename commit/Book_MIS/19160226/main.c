#0include "book.h"
#include<stdlib.h>

int main(void)
{
	head = last = NULL;
	while(1)
	{
	switch(menu())
	{
	case 1:enter();system("pause");
	break;
	case 2:search();system("pause");
	break;
	case 3:modify();system("pause");
	break;
	case 4:del(&head,&last);system("pause");
	break;
	case 5:save();system("pause");
	break;
	case 6:load();system("pause");
	break;
	case 7:exit(0);
	}
        }
return 0;
}
