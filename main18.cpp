#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
char tablazat[3][9] = {
        { 'i', 'o', 'q', 'h', 'b', 'f', 'y', 'l', 'w'},
        { 'n', 'r', 'a', 'g', 's', 'k', 't', 'e', 'z'},
        { 'd', 'u', 'p', 'x', 'c', 'j', 'v', 'm', ' '}
    };
char betu[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};

string szo;

getline (cin, szo);

int sizeszo=size(szo);

for(int k=0;k<sizeszo;k++)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(szo[k]==tablazat[i][j])
			{
				cout <<b etu[i] << betu[j];
			}
		}
	}
}

return 0;	
}