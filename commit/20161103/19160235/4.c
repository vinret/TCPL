#include <iostream>  
#include <string>  
 
using namespace std;  
 
int main()  
{  
    int num[128]={0};  
    string c;  
    getline(cin,c);  
    int len=c.length();  
    for(int i=0;i<len;i++)  
    {  
        if( c[i]>='a' && c[i]<='z')  
            num[c[i]]++;  
        else if(c[i]>='A' && c[i]<='Z')  
        {  
            c[i]=c[i]-'A'+'a';  
            num[c[i]]++;  
        }  
    }  
    int max=0;  
    char ch;  
    for(int i='a';i<='z';i++)  
    {  
        if(num[i]>max)  
        {  
            max=num[i];  
            ch=char(i);  
        }  
    }  
    cout<<ch<<" "<<max<<endl;  
 
    return 0;  
}  

