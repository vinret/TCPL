#include<stdio.h>
void print_hex(int a)
{    
    if(a<16) 
    { 
        switch(a)
        {
          case 0:printf("0");break;
          case 1:printf("1");break;
          case 2:printf("2");break;
          case 3:printf("3");break;
          case 4:printf("4");break;
          case 5:printf("5");break;
          case 6:printf("6");break;
          case 7:printf("7");break;
          case 8:printf("8");break;
          case 9:printf("9");break;
          case 10:printf("A");break;
          case 11:printf("B");break;
          case 12:printf("C");break;
          case 13:printf("D");break;
          case 14:printf("E");break;
          default:printf("F");
        }
    }
    else
    {  int c,i=0;
       c=a;
     while(c>=16){    
      c=(c-c%16)/16;
      i++;
      }
     switch(c)
     {
        case 0:printf("0");break;
        case 1:printf("1");break;
        case 2:printf("2");break;
        case 3:printf("3");break;
        case 4:printf("4");break;
        case 5:printf("5");break;
        case 6:printf("6");break;
        case 7:printf("7");break;
        case 8:printf("8");break;
        case 9:printf("9");break;
        case 10:printf("A");break;
        case 11:printf("B");break;
        case 12:printf("C");break;
        case 13:printf("D");break;
        case 14:printf("E");break;
        default:printf("F");
      }
     a=a-i*16;
     if(a>=16)  print_hex(a);
    }
}

int main()
{
int a;
scanf("%d",&a);
print_hex(a);
printf("\n");
return 0;
}
