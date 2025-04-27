#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;

int main()
{
string str1 =  "101011";
string str2 =  "011101";
//             1001000
int s1, s2;
int T=0;
int N = max(str1.size() , str2.size());
int v[N];
	for (int i=N-1; i >= 0; i--)
	{
    	s1 = str1[i] - '0';
    	s2 = str2[i] - '0';
    	v[i] = s1 + s2 + T;

		if (v[i] == 2)
		{
			v[i] = 0;
			T = 1;
		}
		else if (v[i] == 3)
		{
			v[i] = 1;
			T = 1;
		}
		else 
			T = 0;
		
	}

	if (T == 1)
		{
			cout << ;
		}


	for (int i=N-1; i >= 0; i--)	
	{
		cout << v[i];
	}
	cout << endl ;
	return 0;
}