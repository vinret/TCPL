#include<stdio.h>
void print_hex(int a){
        if (!a){
                printf("0\n");
                return;
        }
        char h[16][2]={"0","1","2","3","4",
                       "5","6","7","8","9",
                       "A","B","C","D","E","F"};
        int f[1000],count=0;
        while (a){
                f[++count]=a%16;
                a/=16;
        }
        while (count)
                printf(h[f[count--]]);
        printf("\n");
        return;
}
int main(){
        int n;
        scanf("%d",&n);
        print_hex(n);

