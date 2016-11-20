#include<iostream>  
#include<map>  
#include<string>  
using namespace std;  
int main()  
{  
    int i = 0,  MaxFrequency = 0; 
	    char MaxFrequencyChar='z';  
		    string str; 
			    map<char, int> frequency; 
				    getline(cin, str); 
					    for ( i = 0 ; i < str.length(); i++)  
						    {  
							        if ((str[i] >='A' && str[i] <= 'Z') || (str[i] >='a' && str[i] <='z')) 
									        {  
											            if (str[i] >='A' && str[i] <= 'Z')
														            {  
																	                str[i] = str[i] + 32;  
																					            }  
																							            frequency[str[i]]++; 
																											        }  
																													    }  
																														    for (auto it : frequency)
																															    {  
																																        if (it.second > MaxFrequency)  
																																		        {  
																																				            MaxFrequency =it.second;
																																							            MaxFrequencyChar =it.first; 
																																										        }  
																																												    }  
																																													    cout << MaxFequencyChar << ' ' << MaxFrequency;
																																														    //system("pause");  
																																															    return 0;  
																																																}  


