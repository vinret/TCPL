#include<stdio.h>
#include<string.h>
void print_num(int num)
{
        char num_str[4] = {0};
        sprintf(num_str,"%d",num);
        char * temp = num_str;
        while(*temp != '\0')
        {
               switch(*temp)
               {
                       case '0': printf("ling");break;
                       case '1': printf("yi");break;
                       case '2': printf("er");break;
                       case '3': printf("san");break;
                       case '4': printf("si");break;
                       case '5': printf("wu");break;
                       case '6': printf("liu");break;
                       case '7': printf("qi");break;
                       case '8': printf("ba");break;
                       case '9': printf("jiu");break;
                       default:break;
               }
               temp++;
               if (*temp != '\0')
                       printf(" ");
               else
                       printf("\n");
         }                           
}
int main(int argc, char *argv[])
{
        char num[101] = {0};
        char *temp = num;
        int total = 0;
        scanf("%s",num);
        while(*temp != '\0')
        {
               total += (*temp - '0');
               temp++;
        }
        print_num(total);
        return 0;
}   
