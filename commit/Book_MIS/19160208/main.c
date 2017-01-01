#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"1.h"
#include"command.h"

int main()
{
    int c;
	for(;;)               /* 主菜单 */
    {
		menu();
		printf("请输入所选项\n");
		scanf("%d",&c);
	    if(c<1)
		{
			printf("          ########################################\n");
			printf("          #########     输入错误！！！   #########\n");
			printf("          #########  __________________  #########\n");
			printf("          ########################################\n");
			break;
		}
		if(c>6)
		{
			printf("          ########################################\n");
			printf("          #########     输入错误！！！   #########\n");
			printf("          #########  __________________  #########\n");
			printf("          ########################################\n");
			break;
		}
        if(c>0&&c<7)
	    { 
		    switch(c)
		    {
				case 1:Add(); 
			    	break; 
				case 2:Search();
				    break;
				case 3:Delete();
					break;
		        case 4:Revise();
					break;
				case 5:
				    printf("          ########################################\n");
					printf("          #######      感谢您的使用        #######\n");
		            printf("          ####### ________________________ #######\n");
					printf("          ########################################\n");
				    break; // exit(0);

     	     }
         }

    }

}                                   
