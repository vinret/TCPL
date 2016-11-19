#include<iostream>  
#include<string>  
#include<cstring>  
using namespace std;  
 
int main(){  
    string s;  
    int num = 0;  
    int ans0 = 0;  
    int ans1 = 0;  
     getline(cin,s);  
     
   
    for(int i=0 ;i<s.length() ;i++){  
        if(s[i]>='a'&&s[i]<='z'){  
            num+= s[i]-'a'+1;  
        }  
        if(s[i]>='A'&&s[i]<='Z'){  
            num += s[i]-'A'+1;  
        }  
    }  
   
    while(num){  
        if(num%2==0){  
            ans0++;  
        }else{  
            ans1++;  
        }  
        num /= 2;  
    }  
   
    cout<<ans0<<" "<<ans1<<endl;  
   
  return 0;  
}  

