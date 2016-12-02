nclude <stdio.h>
void triangle_judge(int a,int b,int c){
  if (a>b) {
        a=a^b;
        b=a^b;
        a=a^b;
  }
  if (a>c) {
        a=a^c;
        c=a^c;
        a=a^c;
  }
  if (b>c) {
        c=c^b;
        b=c^b;
        c=c^b;
  }
  if (a+b<=c) printf("bu neng gou cheng san jiao xing");
  else if (a!=b && b!=c) printf("pu tong san jiao xing");
       else if (a==b && b==c) printf("deng bian san jiao xing");
            else printf("deng yao san jiao xing");
  return;
}

int main(){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        triangle_judge(a,b,c);
        return 0;
}

