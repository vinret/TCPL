#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
	double a, b, c, n;
		int i = 1;
			vector<bool> ivec;
				string s;
					cin >> n;
						if (n > 10)
								exit(0);
									while (n--)
										{
												cin >> a >> b >> c;
														if (a + b > c)
																	ivec.push_back(true);
																			else
																						ivec.push_back(false);
																							}
																								for (vector<bool>::iterator it = ivec.begin(); it != ivec.end(); it++)
																									{
																											if (*it)
																														s = "true";
																																else
																																			s = "false";
																																					cout << "Case #" << i << ": " << s << endl;
																																							i++;
																																								}
																																									system("pause");
																																										return 0;
																																										}

































