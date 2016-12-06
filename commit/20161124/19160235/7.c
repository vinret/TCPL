#include<iostream>
#include<cmath>
using namespace std;
	int N,M;
	int shuzu[200];

void shuchu(){
		for(int b=0;b<N;b++){
		if(b==N-1){
			cout<<shuzu[N-1];
		}else{
		cout<<shuzu[b]<<" ";
		}
	}
}

void houmian(int n,int m){
		for(int j=N-m;j<N;j++){  //把要移动的位数放到数组后面
		shuzu[++n]=shuzu[j];
	
	}
}

void houyi(int n,int m){
		for(int z=N-m-1;z>=0;z--){  //把剩余数据往后移动
		shuzu[--n]=shuzu[z];
	}
}

void zuihou(int n,int m){
		for(int h=0;h<m;h++){
		shuzu[h]=shuzu[++n];
	}
}

int main(){
	int g=0;
	cin>>N>>M;

	for(int i=0;i<N;i++){
		cin>>shuzu[i];
	}
	if(M<N){
		houmian(N,M);
		houyi(N,M);
		zuihou(N,M);
		shuchu();
	}else{
		g = M%N;
		houmian(N,g);
		houyi(N,g);
		zuihou(N,g);
		shuchu();
	}

	
	return 0;
}

