#include"book.h"
#include"command.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char *isbn;
	do{
         	char cmd;
		menu();
		cmd=getchar();
		getchar();
		if (cmd=='q')
	             	{
			 save(plist,book);
		        break; 
			 }
		switch (cmd)
		{
			case'o':
			  output(book,plist);
			  break;
		        
			case's':
			  find(plist,isbn);
			  break;

			case'i':
			  insert(plist,book);
			  break;

			case'd':
			  delete(plist,isbn);
			  break;
		}
	}while(1);
	return 0;
}
			  
			  
			  

			  
		          	  
			

