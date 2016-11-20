#include<stdio.h>

void print_hex(int a){
                char hex[100];
                int i,j=0;
                do{
                                i=a%16;
                                switch(i){
                                                case 0:hex[j]='0';break;
                                                case 1:hex[j]='1';break;
                                                case 2:hex[j]='2';break;
                                                case 3:hex[j]='3';break;
                                                case 4:hex[j]='4';break;
                                                case 5:hex[j]='5';break;
                                                case 6:hex[j]='6';break;
                                                case 7:hex[j]='7';break;
                                                case 8:hex[j]='8';break;
                                                case 9:hex[j]='9';break;
                                                case 10:hex[j]='A';break;
                                                case 11:hex[j]='B';break;
                                                case 12:hex[j]='C';break;
                                                case 13:hex[j]='D';break;
                                                case 14:hex[j]='E';break;
                                                default:hex[j]='F';break;
                                }
                                j++;
                                a/=16;
                }while(a>0);
                for(;j>=0;j--)
                                printf("%c",hex[j]);
                printf("\n");
}

int main()
{
                int a;
                scanf("%d",&a);
                print_hex(a);
                return 0;
}

