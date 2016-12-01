#include<stdio.h>
int main()
{
        int i=0,j,n,temp,min,max;
        int num[4];
        scanf("%d",&n);

        while(n!=6174){
            while(i<4){
                num[i]=n%10;
                n=n/10;
				i++;
			 }
             for(i=0;i<3;i++){
                for(j=0;j<3-i;j++)
					if(num[j]>num[j+1])  { temp=num[j];num[j]=num[j+1];num[j+1]=temp;
					  }
				}
        max=num[0]+10*num[1]+100*num[2]+1000*num[3];
        min=num[3]+10*num[2]+100*num[1]+1000*num[0];
        n=max-min;
        printf("%d - %d = %d\n",max,min,n);
		i=0;
}

        return 0;
}
